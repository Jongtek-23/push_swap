/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:52:07 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:52:08 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_a(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_a, tmp);
}

void	rotate_b(t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_b, tmp);
}

void	rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}
