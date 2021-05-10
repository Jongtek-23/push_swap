#include "../include/push_swap.h"

int	s_c_500_6_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 247;
	len = 23;
	j = 0;
	all->grand_6 = malloc(sizeof(int) * 23);
	if (all->grand_6 == NULL)
		return (0);
	while (len > 0)
	{
		(all->grand_6)[j] = (all->numbers)[k];
		j++;
		k++;
		len--;
	}
	return (1);
}

int	s_c_500_6(t_all *all)
{
	int	i;
	int	len;
	int	k;

	i = 0;
	k = 225;
	len = 22;
	all->petit_6 = malloc(sizeof(int) * 22);
	if (all->petit_6 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_6)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (s_c_500_6_help(all) == 0)
		return (0);
	return (1);
}

int	s_c_500_5_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 202;
	len = 23;
	j = 0;
	all->grand_5 = malloc(sizeof(int) * 23);
	if (all->grand_5 == NULL)
		return (0);
	while (len > 0)
	{
		(all->grand_5)[j] = (all->numbers)[k];
		j++;
		k++;
		len--;
	}
	return (1);
}

int	s_c_500_5(t_all *all)
{
	int	i;
	int	len;
	int	k;

	i = 0;
	k = 180;
	len = 22;
	all->petit_5 = malloc(sizeof(int) * 22);
	if (all->petit_5 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_5)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (s_c_500_5_help(all) == 0)
		return (0);
	return (1);
}
