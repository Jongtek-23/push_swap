#include "../include/push_swap.h"

int	s_c_500_4_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 157;
	len = 23;
	j = 0;
	all->grand_4 = malloc(sizeof(int) * 23);
	if (all->grand_4 == NULL)
		return (0);
	while (len > 0)
	{
		(all->grand_4)[j] = (all->numbers)[k];
		j++;
		k++;
		len--;
	}
	return (1);
}

int	s_c_500_4(t_all *all)
{
	int	len;
	int	i;
	int	k;

	len = 22;
	i = 0;
	k = 135;
	all->petit_4 = malloc(sizeof(int) * 22);
	if (all->petit_4 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_4)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (s_c_500_4_help(all) == 0)
		return (0);
	return (1);
}

int	s_c_500_3_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 112;
	j = 0;
	len = 23;
	all->grand_3 = malloc(sizeof(int) * 23);
	if (all->grand_3 == NULL)
		return (0);
	while (len > 0)
	{
		(all->grand_3)[j] = (all->numbers)[k];
		j++;
		k++;
		len--;
	}
	return (1);
}

int	s_c_500_3(t_all *all)
{
	int	i;
	int	k;
	int	len;

	all->petit_3 = malloc(sizeof(int) * 22);
	if (all->petit_3 == NULL)
		return (0);
	i = 0;
	k = 90;
	len = 22;
	while (len > 0)
	{
		(all->petit_3)[i] = (all->numbers)[k];
		k++;
		i++;
		len--;
	}
	if (s_c_500_3_help(all) == 0)
		return (0);
	return (1);
}
