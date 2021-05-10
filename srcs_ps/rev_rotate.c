/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:52:01 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:52:02 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rev_rotate_a(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*ptr;

	if (*stack_a == NULL || ft_lstsize(*stack_a) == 1)
		return ;
	tmp = ft_lstlast(*stack_a);
	ptr = (*stack_a);
	while (ptr->next && ptr->next->next)
		ptr = ptr->next;
	ptr->next = NULL;
	ft_lstadd_front(stack_a, tmp);
}

void	rev_rotate_b(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*ptr;

	if (*stack_b == NULL || ft_lstsize(*stack_b) == 1)
		return ;
	tmp = ft_lstlast(*stack_b);
	ptr = (*stack_b);
	while (ptr->next && ptr->next->next)
		ptr = ptr->next;
	ptr->next = NULL;
	ft_lstadd_front(stack_b, tmp);
}

void	rev_rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	rev_rotate_a(stack_a);
	rev_rotate_b(stack_b);
}
