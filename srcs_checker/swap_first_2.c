/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_first_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:49:20 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:49:21 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	swap_2_first_a(t_list **stack)
{
	void	*tmp_content;

	if (stack == NULL || ft_lstsize(*stack) == 1)
		return ;
	tmp_content = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp_content;
}

void	swap_2_first_b(t_list **stack)
{
	void	*tmp_content;

	if (stack == NULL || ft_lstsize(*stack) == 1)
		return ;
	tmp_content = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp_content;
}

void	swap_2_first_a_b(t_list **stack_a, t_list **stack_b)
{
	swap_2_first_a(stack_a);
	swap_2_first_b(stack_b);
}
