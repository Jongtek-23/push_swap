/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_c_500_7_8.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 00:54:51 by focampo           #+#    #+#             */
/*   Updated: 2021/05/11 00:54:51 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	s_c_500_8_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 337;
	len = 23;
	j = 0;
	all->grand_8 = malloc(sizeof(int) * 23);
	if (all->grand_8 == NULL)
		return (0);
	while (len > 0)
	{
		(all->grand_8)[j] = (all->numbers)[k];
		j++;
		k++;
		len--;
	}
	return (1);
}

int	s_c_500_8(t_all *all)
{
	int	i;
	int	len;
	int	k;

	i = 0;
	k = 315;
	len = 22;
	all->petit_8 = malloc(sizeof(int) * 22);
	if (all->petit_8 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_8)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (s_c_500_8_help(all) == 0)
		return (0);
	return (1);
}

int	s_c_500_7_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 292;
	len = 23;
	j = 0;
	all->grand_7 = malloc(sizeof(int) * 23);
	if (all->grand_7 == NULL)
		return (0);
	while (len > 0)
	{
		(all->grand_7)[j] = (all->numbers)[k];
		j++;
		k++;
		len--;
	}
	return (1);
}

int	s_c_500_7(t_all *all)
{
	int	i;
	int	len;
	int	k;

	i = 0;
	k = 270;
	len = 22;
	all->petit_7 = malloc(sizeof(int) * 22);
	if (all->petit_7 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_7)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (s_c_500_7_help(all) == 0)
		return (0);
	return (1);
}
