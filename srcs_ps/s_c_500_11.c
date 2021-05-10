#include "../include/push_swap.h"

int	s_c_500_11_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 475;
	len = 25;
	j = 0;
	all->grand_11 = malloc(sizeof(int) * 25);
	if (all->grand_11 == NULL)
		return (0);
	while (len > 0)
	{
		(all->grand_11)[j] = (all->numbers)[k];
		j++;
		k++;
		len--;
	}
	return (1);
}

int	s_c_500_11(t_all *all)
{
	int	i;
	int	len;
	int	k;

	i = 0;
	k = 450;
	len = 25;
	all->petit_11 = malloc(sizeof(int) * 25);
	if (all->petit_11 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_11)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (s_c_500_11_help(all) == 0)
		return (0);
	return (1);
}
