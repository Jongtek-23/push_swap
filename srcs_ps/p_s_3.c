/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:51:17 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:51:18 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	p_s_3(t_list **stack_a, t_list **stack_b, int len)
{
	int	*nbr_1;
	int	*nbr_2;
	int	*nbr_3;

	nbr_1 = (int *)(*stack_a)->content;
	nbr_2 = (int *)(*stack_a)->next->content;
	nbr_3 = (int *)(*stack_a)->next->next->content;
	if (*nbr_1 > *nbr_2 && *nbr_2 < *nbr_3 && *nbr_3 > *nbr_1)
		ft_putendl_fd("sa", 1);
	else if (*nbr_1 > *nbr_2 && *nbr_2 > *nbr_3 && *nbr_3 < *nbr_1)
	{
		ft_putendl_fd("sa", 1);
		ft_putendl_fd("rra", 1);
	}
	else if (*nbr_1 > *nbr_2 && *nbr_2 < *nbr_3 && *nbr_3 < *nbr_1)
		ft_putendl_fd("ra", 1);
	else if (*nbr_1 < *nbr_2 && *nbr_2 > *nbr_3 && *nbr_3 > *nbr_1)
	{
		ft_putendl_fd("sa", 1);
		ft_putendl_fd("ra", 1);
	}
	else if (*nbr_1 < *nbr_2 && *nbr_2 > *nbr_3 && *nbr_3 < *nbr_1)
		ft_putendl_fd("rra", 1);
}
