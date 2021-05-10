#include "../include/push_swap.h"

int	s_c_500_10_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 427;
	len = 23;
	j = 0;
	all->grand_10 = malloc(sizeof(int) * 23);
	if (all->grand_10 == NULL)
		return (0);
	while (len > 0)
	{
		(all->grand_10)[j] = (all->numbers)[k];
		j++;
		k++;
		len--;
	}
	return (1);
}

int	s_c_500_10(t_all *all)
{
	int	i;
	int	len;
	int	k;

	i = 0;
	k = 405;
	len = 22;
	all->petit_10 = malloc(sizeof(int) * 22);
	if (all->petit_10 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_10)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (s_c_500_10_help(all) == 0)
		return (0);
	return (1);
}

int	s_c_500_9_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 382;
	len = 23;
	j = 0;
	all->grand_9 = malloc(sizeof(int) * 23);
	if (all->grand_9 == NULL)
		return (0);
	while (len > 0)
	{
		(all->grand_9)[j] = (all->numbers)[k];
		j++;
		k++;
		len--;
	}
	return (1);
}

int	s_c_500_9(t_all *all)
{
	int	i;
	int	len;
	int	k;

	i = 0;
	k = 360;
	len = 22;
	all->petit_9 = malloc(sizeof(int) * 22);
	if (all->petit_9 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_9)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (s_c_500_9_help(all) == 0)
		return (0);
	return (1);
}
