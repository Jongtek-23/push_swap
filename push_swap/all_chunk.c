#include "push_swap.h"

int	stack_chunk_5_help(t_all *all)
{
	int	j;
	int	len;
	int	k;

	k = 90;
	len = 10;
	j = 0;
	all->grand_5 = malloc(sizeof(int) * 10);
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

int	stack_chunk_5(t_all *all)
{
	int	i;
	int	len;
	int	k;

	i = 0;
	k = 80;
	len = 10;
	all->petit_5 = malloc(sizeof(int) * 10);
	if (all->petit_5 == NULL)
		return (0);
	while (len > 0)
	{
		(all->petit_5)[i] = (all->numbers)[k];
		i++;
		k++;
		len--;
	}
	if (stack_chunk_5_help(all) == 0)
		return (0);
	return (1);
}

int	all_chunks(t_all *all)
{
	if (stack_chunk_1(all) == 0)
		return (0);
	if (stack_chunk_2(all) == 0)
		return (0);
	if (stack_chunk_3(all) == 0)
		return (0);
	if (stack_chunk_4(all) == 0)
		return (0);
	if (stack_chunk_5(all) == 0)
		return (0);
	return (1);
}
