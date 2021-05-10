/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_of_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:49:33 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:49:34 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	view_of_stacks(t_list *stack_a, t_list *stack_b)
{
	int	*nbr;
	int	*nbr_b;

	ft_putendl_fd("STACK-A", 1);
	while (stack_a)
	{
		nbr = (int *)stack_a->content;
		printf("%d\n", *nbr);
		stack_a = stack_a->next;
	}
	ft_putendl_fd("STACK-B", 1);
	while (stack_b)
	{
		nbr_b = stack_b->content;
		printf("%d\n", *nbr_b);
		stack_b = stack_b->next;
	}
}
