/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_2_argc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:48:08 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:48:09 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	ft_is_nbr(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_integer(char *str)
{
	long	nbr;
	int		i;
	int		minus;

	minus = 0;
	i = 0;
	nbr = 0;
	if (str[i] == '-')
	{
		minus = 1;
		i++;
	}
	if (ft_strlen(str) > 11 || ft_strlen(str) == 0)
		return (0);
	while (ft_isdigit(str[i]))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (minus == 1)
		nbr *= -1;
	if (str[i] != '\0' || nbr > INT_MAX || nbr < INT_MIN)
		return (0);
	return (1);
}

int	check_2_argc(int argc, char **argv)
{
	char	**str;
	int		i;

	argv++;
	i = 0;
	str = ft_split(*argv, ' ');
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (ft_is_nbr(str[i]) == 0)
		{
			ft_free_split(str);
			return (0);
		}
		if (ft_is_integer(str[i]) == 0)
		{
			ft_free_split(str);
			return (0);
		}
		i++;
	}
	ft_free_split(str);
	return (1);
}

int	ft_strlen_str(char **str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		i++;
		len++;
	}
	return (len);
}

int	ft_is_double(int argc, char **argv, t_all *all)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	str = ft_split(argv[1], ' ');
	if (str == NULL)
		return (0);
	all->len_is_double = ft_strlen_str(str);
	while (i < all->len_is_double)
	{
		j = i + 1;
		while (j < all->len_is_double)
		{
			if (ft_strcmp(str[i], str[j]) == 0)
			{
				ft_free_split(str);
				return (0);
			}
			j++;
		}
		i++;
	}
	ft_free_split(str);
	return (1);
}
