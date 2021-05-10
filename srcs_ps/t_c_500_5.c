/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_c_500_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 00:55:38 by focampo           #+#    #+#             */
/*   Updated: 2021/05/11 00:55:39 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	tmp_500_value_petit_5(t_all *all)
{
	int	nbr;
	int	len;
	int	i;

	len = 22;
	i = 0;
	while (len > 0)
	{
		if (i == all->iterate)
		{
			all->iterate--;
			break ;
		}
		i++;
		len--;
	}
	nbr = all->petit_5[i];
	return (nbr);
}

int	tmp_500_value_grand_5(t_all *all)
{
	int	nbr;
	int	len;
	int	i;

	len = 23;
	i = 0;
	while (len > 0)
	{
		if (i == all->iterate)
		{
			all->iterate--;
			break ;
		}
		i++;
		len--;
	}
	nbr = all->grand_5[i];
	return (nbr);
}

void	t_c_500_5_petit(t_all *all, t_list **stack_a, t_list **stack_b)
{
	int		len_b;
	int		i;
	t_list	*tmp;
	int		*tmp_value;

	all->boucle = 22;
	all->iterate = 21;
	while (all->boucle > 0)
	{
		len_b = ft_lstsize(*stack_b);
		all->div = len_b / 2;
		all->value_choose = tmp_500_value_petit_5(all);
		all->pos_in_stack_b = get_position_val(*stack_b, all->value_choose);
		all->dist_top_stack_b_up = all->pos_in_stack_b - 1;
		all->dist_top_stack_b_back = len_b - all->pos_in_stack_b + 1;
		move_value_top_b(all, stack_b);
		ft_putendl_fd("pa", 1);
		push_b_to_a(stack_b, stack_a);
		all->boucle--;
	}
}

void	t_c_500_5_grand(t_all *all, t_list **stack_a, t_list **stack_b)
{
	int		len_b;
	int		i;
	t_list	*tmp;
	int		*tmp_value;

	all->boucle = 23;
	all->iterate = 22;
	while (all->boucle > 0)
	{
		len_b = ft_lstsize(*stack_b);
		all->div = len_b / 2;
		all->value_choose = tmp_500_value_grand_5(all);
		all->pos_in_stack_b = get_position_val(*stack_b, all->value_choose);
		all->dist_top_stack_b_up = all->pos_in_stack_b - 1;
		all->dist_top_stack_b_back = len_b - all->pos_in_stack_b + 1;
		move_value_top_b(all, stack_b);
		ft_putendl_fd("pa", 1);
		push_b_to_a(stack_b, stack_a);
		all->boucle--;
	}
}
