/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_rapide.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:52:28 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:52:30 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	trie_rapide(t_list **stack_a, t_list **stack_b, t_all *all)
{
	while (ft_lstsize(*stack_a) > 0)
	{
		if (check_sort_stack_ps(*stack_a, *stack_b))
			return (1);
		all->number_trie = (int *)(*stack_a)->content;
		all->nbr_petit_trie = petit_value(*stack_a);
		if (*(all->number_trie) == all->nbr_petit_trie)
		{
			all->nbr_trie = (int *)(*stack_a)->content;
			push_a_to_b(stack_a, stack_b);
			ft_putendl_fd("pb", 1);
		}
		else
		{
			rotate_a(stack_a);
			ft_putendl_fd("ra", 1);
		}
	}
	all->n_trie = ft_lstsize(*stack_b);
	while ((all->n_trie)-- > 0)
	{
		push_b_to_a(stack_b, stack_a);
		ft_putendl_fd("pa", 1);
	}
	return (1);
}
