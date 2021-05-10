/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:51:47 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:51:49 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	with_more_argc(t_list **stack_a, int argc, char **argv)
{
	int	i;
	int	*value;

	i = 1;
	while (argc > 1)
	{
		value = allocation_int(ft_atoi(argv[i]));
		if (value == NULL)
			return (0);
		ft_lstadd_back(stack_a, ft_lstnew(value));
		argc--;
		i++;
	}
	return (1);
}

int	with_2_argc(t_list **stack_a, int argc, char **argv)
{
	int		*value;
	char	**split;
	int		i;

	argv++;
	i = 0;
	split = ft_split(*argv, ' ');
	if (split == NULL)
		return (0);
	while (split[i])
	{
		value = allocation_int(ft_atoi(split[i]));
		if (value == NULL)
			return (0);
		ft_lstadd_back(stack_a, ft_lstnew(value));
		i++;
	}
	ft_free_split(split);
	return (1);
}

int	init(t_list **stack_a, int argc, char **argv)
{
	if (argc == 2)
	{
		if (with_2_argc(stack_a, argc, argv) == 0)
			return (0);
	}
	else
		if (with_more_argc(stack_a, argc, argv) == 0)
			return (0);
	return (1);
}

void	init_values(t_all *all, int argc, char **argv)
{
	all->stack_a = NULL;
	all->stack_b = NULL;
	all->tmp_stack_a = NULL;
	all->tmp_stack_b = NULL;
	all->tmp_argc = argc;
	all->tmp_argv = argv;
}

int	main(int argc, char *argv[])
{
	t_all	all;

	init_values(&all, argc, argv);
	if (argc < 2)
		return (0);
	if (verif_values(argc, argv, &all) == 0)
	{
		ft_putendl_fd("Error", 1);
		return (0);
	}
	if (init(&(all.stack_a), argc, argv) == 0)
		return (0);
	if (check_sort_stack_ps(all.stack_a, all.stack_b) == 1)
		return (0);
	if (get_new_stack(&(all.tmp_stack_a), argc, argv) == 0)
		return (0);
	if (push_swap_exec(&all.tmp_stack_a, &all.tmp_stack_b, &all) == 0)
	{
		ft_lstclear(&(all.tmp_stack_a), free);
		ft_lstclear(&(all.stack_a), free);
		return (0);
	}
	ft_lstclear(&(all.tmp_stack_a), free);
	ft_lstclear(&(all.stack_a), free);
	return (0);
}
