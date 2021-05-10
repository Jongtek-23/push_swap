/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   near_top_500_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 00:52:48 by focampo           #+#    #+#             */
/*   Updated: 2021/05/11 00:52:50 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	v_s_500_int_1_grand(t_all *all, int n)
{
	int	j;
	int	len;

	len = 23;
	j = 0;
	while (len > 0)
	{
		if ((all->grand_1)[j] == n)
		{
			return (1);
		}
		j++;
		len--;
	}
	return (0);
}

int	v_s_500_int_1_petit(t_all *all, int n)
{
	int	i;
	int	k;
	int	len;

	len = 22;
	i = 0;
	while (len > 0)
	{
		if ((all->petit_1)[i] == n)
		{
			return (1);
		}
		i++;
		len--;
	}
	return (0);
}

int	h_s_500_1(t_list *stack_hold, t_all *all)
{
	int	nbr;
	int	*n;
	int	j;

	j = 1;
	all->pos_second = 1;
	while (stack_hold)
	{
		n = (int *)stack_hold->content;
		if (v_s_500_int_1_petit(all, *n) == 1
			|| v_s_500_int_1_grand(all, *n) == 1)
		{
			if (j == all->last_value)
			{
				all->last_value--;
				break ;
			}
			j++;
		}
		all->pos_second++;
		stack_hold = stack_hold->next;
	}
	nbr = *n;
	return (nbr);
}

int	h_f_500_1(t_list *stack_hold, t_all *all)
{
	int	nbr;
	int	*n;

	all->pos_first = 1;
	while (stack_hold)
	{
		n = (int *)stack_hold->content;
		if (v_s_500_int_1_petit(all, *n) == 1
			|| v_s_500_int_1_grand(all, *n) == 1)
			break ;
		all->pos_first++;
		stack_hold = stack_hold->next;
	}
	nbr = *n;
	return (nbr);
}

int	near_top_500_1(t_all *all, t_list **stack_a, t_list **stack_b)
{
	int	len_stack_b;
	int	grand;

	all->last_value = 45;
	grand = all->petit_1[21];
	while (ft_lstsize(*stack_a))
	{
		if (check_sort_stack_ps(*stack_a, *stack_b) == 1)
			return (0);
		len_stack_b = ft_lstsize(*stack_b);
		if (len_stack_b == 45)
			return (1);
		all->size_stack = ft_lstsize(*stack_a);
		all->hold_first = h_f_500_1(*stack_a, all);
		all->hold_second = h_s_500_1(*stack_a, all);
		all->dist_to_top_up = all->pos_first - 1;
		all->dist_to_top_back = all->size_stack - all->pos_second + 1;
		dist_to_top(all, stack_a, stack_b);
		ft_putendl_fd("pb", 1);
		push_a_to_b(stack_a, stack_b);
		gerer_stack_b(stack_b, grand);
	}
	return (1);
}
