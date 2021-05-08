#include "push_swap.h"

int	stack_chunk_4_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 70;
	len = 10;
	j = 0;
	all->grand_4 = malloc(sizeof(int) * 10);
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

int	stack_chunk_4(t_all *all)
{
	int	len;
	int	i;
	int	k;

	len = 10;
	i = 0;
	k = 60;
	all->petit_4 = malloc(sizeof(int) * 10);
	if (all->petit_4 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_4)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (stack_chunk_4_help(all) == 0)
		return (0);
	return (1);
}

int	stack_chunk_3_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 50;
	j = 0;
	len = 10;
	all->grand_3 = malloc(sizeof(int) * 10);
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

int	stack_chunk_3(t_all *all)
{
	int	i;
	int	k;
	int	len;

	all->petit_3 = malloc(sizeof(int) * 10);
	if (all->petit_3 == NULL)
		return (0);
	i = 0;
	k = 40;
	len = 10;
	while (len > 0)
	{
		(all->petit_3)[i] = (all->numbers)[k];
		k++;
		i++;
		len--;
	}
	if (stack_chunk_3_help(all) == 0)
		return (0);
	return (1);
}
