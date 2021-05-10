/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_small_greater.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:50:54 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:50:55 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_greater(t_list *stack_a)
{
	int	*max;
	int	*k;

	max = (int *)stack_a->content;
	while (stack_a)
	{
		k = (int *)stack_a->content;
		if (*max < *k)
			max = k;
		stack_a = stack_a->next;
	}
	return (*max);
}

int	find_small(t_list *stack_a)
{
	int	*min;
	int	*k;

	min = (int *)stack_a->content;
	while (stack_a)
	{
		k = (int *)stack_a->content;
		if (*min > *k)
			min = k;
		stack_a = stack_a->next;
	}
	return (*min);
}
