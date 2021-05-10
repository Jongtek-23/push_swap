/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_c_500_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 00:54:25 by focampo           #+#    #+#             */
/*   Updated: 2021/05/11 00:54:26 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	s_c_500_2_help(t_all *all)
{
	int	len;
	int	j;
	int	k;

	len = 23;
	j = 0;
	k = 67;
	all->grand_2 = malloc(sizeof(int) * 23);
	if (all->grand_2 == NULL)
		return (0);
	while (len > 0)
	{
		(all->grand_2)[j] = (all->numbers)[k];
		k++;
		j++;
		len--;
	}
	return (1);
}

int	s_c_500_2(t_all *all)
{
	int	i;
	int	len;
	int	k;

	i = 0;
	len = 22;
	k = 45;
	all->petit_2 = malloc(sizeof(int) * 22);
	if (all->petit_2 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_2)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (s_c_500_2_help(all) == 0)
		return (0);
	return (1);
}

int	s_c_500_1_help(t_all *all)
{
	int	j;
	int	k;
	int	len;

	j = 0;
	len = 23;
	k = 23;
	all->grand_1 = malloc(sizeof(int) * 23);
	if (all->grand_1 == NULL)
		return (0);
	while (len > 0)
	{
		(all->grand_1)[j] = (all->numbers)[k];
		j++;
		k++;
		len--;
	}
	return (1);
}

int	s_c_500_1(t_all *all)
{
	int	i;
	int	j;
	int	len;

	all->petit_1 = malloc(sizeof(int) * 22);
	if (all->petit_1 == NULL)
		return (0);
	len = 22;
	i = 0;
	while (len > 0)
	{
		(all->petit_1)[i] = (all->numbers)[i];
		i++;
		len--;
	}
	if (s_c_500_1_help(all) == 0)
		return (0);
	return (1);
}
