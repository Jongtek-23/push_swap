#include "push_swap.h"

int	stack_chunk_2_help(t_all *all)
{
	int	len;
	int	j;
	int	k;

	len = 10;
	j = 0;
	k = 30;
	all->grand_2 = malloc(sizeof(int) * 10);
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

int	stack_chunk_2(t_all *all)
{
	int	i;
	int	len;
	int	k;

	i = 0;
	len = 10;
	k = 20;
	all->petit_2 = malloc(sizeof(int) * 10);
	if (all->petit_2 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_2)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (stack_chunk_2_help(all) == 0)
		return (0);
	return (1);
}

int	stack_chunk_1_help(t_all *all)
{
	int	j;
	int	k;
	int	len;

	j = 0;
	len = 10;
	k = 10;
	all->grand_1 = malloc(sizeof(int) * 10);
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

int	stack_chunk_1(t_all *all)
{
	int	i;
	int	j;
	int	len;

	all->petit_1 = malloc(sizeof(int) * 10);
	if (all->petit_1 == NULL)
		return (0);
	len = 10;
	i = 0;
	while (len > 0)
	{
		(all->petit_1)[i] = (all->numbers)[i];
		i++;
		len--;
	}
	if (stack_chunk_1_help(all) == 0)
		return (0);
	return (1);
}
