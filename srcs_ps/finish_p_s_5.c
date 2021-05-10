/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish_p_s_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:51:01 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:51:02 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	finish_p_s_5(t_list **res_p_s_A, t_list **res_p_s_B)
{
	int	*k;
	int	*k_next;

	while (*res_p_s_B)
	{
		if (*res_p_s_B == NULL)
			break ;
		ft_putendl_fd("pa", 1);
		push_b_to_a(res_p_s_B, res_p_s_A);
		k = (int *)(*res_p_s_A)->content;
		k_next = (int *)(*res_p_s_A)->next->content;
		if (*k > *k_next)
		{
			ft_putendl_fd("ra", 1);
			rotate_a(res_p_s_A);
		}
	}
}
