/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_near_top_500.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 00:52:20 by focampo           #+#    #+#             */
/*   Updated: 2021/05/11 00:52:21 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	all_near_top_500(t_all *all, t_list **stack_a, t_list **stack_b)
{
	if (near_top_500_1(all, stack_a, stack_b) == 0)
		return (0);
	if (near_top_500_2(all, stack_a, stack_b) == 0)
		return (0);
	if (near_top_500_3(all, stack_a, stack_b) == 0)
		return (0);
	if (near_top_500_4(all, stack_a, stack_b) == 0)
		return (0);
	if (near_top_500_5(all, stack_a, stack_b) == 0)
		return (0);
	if (near_top_500_6(all, stack_a, stack_b) == 0)
		return (0);
	if (near_top_500_7(all, stack_a, stack_b) == 0)
		return (0);
	if (near_top_500_8(all, stack_a, stack_b) == 0)
		return (0);
	if (near_top_500_9(all, stack_a, stack_b) == 0)
		return (0);
	if (near_top_500_10(all, stack_a, stack_b) == 0)
		return (0);
	if (near_top_500_11(all, stack_a, stack_b) == 0)
		return (0);
	return (1);
}
