/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:48:36 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:48:37 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	which_types(t_list **stack_a, t_list **stack_b, char *word)
{
	if (ft_strcmp(word, "sa") == 0)
		swap_2_first_a(stack_a);
	else if (ft_strcmp(word, "sb") == 0)
		swap_2_first_b(stack_b);
	else if (ft_strcmp(word, "ss") == 0)
		swap_2_first_a_b(stack_a, stack_b);
	else if (ft_strcmp(word, "pa") == 0)
		push_b_to_a(stack_b, stack_a);
	else if (ft_strcmp(word, "pb") == 0)
		push_a_to_b(stack_a, stack_b);
	else if (ft_strcmp(word, "ra") == 0)
		rotate_a(stack_a);
	else if (ft_strcmp(word, "rb") == 0)
		rotate_b(stack_b);
	else if (ft_strcmp(word, "rr") == 0)
		rotate_a_b(stack_a, stack_b);
	else if (ft_strcmp(word, "rra") == 0)
		rev_rotate_a(stack_a);
	else if (ft_strcmp(word, "rrb") == 0)
		rev_rotate_b(stack_b);
	else if (ft_strcmp(word, "rrr") == 0)
		rev_rotate_a_b(stack_a, stack_b);
	else
		return (0);
	return (1);
}

int	read_mots(t_list *hihi, t_list **stack_a, t_list **stack_b)
{
	char	*str;

	while (hihi)
	{
		str = (char *)hihi->content;
		if (which_types(stack_a, stack_b, str) == 0)
		{
			ft_putendl_fd("Error", 1);
			return (0);
		}
		hihi = hihi->next;
	}
	return (1);
}

int	handling_types(t_list **stack_a, t_list **stack_b, t_all *all)
{
	char	*mot;
	char	*types;

	all->hihi = NULL;
	while (get_next_line(0, &types) > 0)
	{
		mot = ft_strdup(types);
		if (mot == NULL)
			return (0);
		ft_lstadd_back(&(all->hihi), ft_lstnew(mot));
		free(types);
	}
	free(types);
	if (read_mots(all->hihi, stack_a, stack_b) == 0)
	{
		ft_lstclear(stack_a, free);
		ft_lstclear(stack_b, free);
		ft_lstclear(&(all->hihi), free);
		return (0);
	}
	ft_lstclear(&(all->hihi), free);
	return (1);
}
