#include "push_swap.h"

int	verify_stack_int_4_grand(t_all *all, int n)
{
	int	j;
	int	len;

	len = 10;
	j = 0;
	while (len > 0)
	{
		if ((all->grand_4)[j] == n)
		{
			return (1);
		}
		j++;
		len--;
	}
	return (0);
}

int	verify_stack_int_4_petit(t_all *all, int n)
{
	int	i;
	int	k;
	int	len;

	len = 10;
	i = 0;
	while (len > 0)
	{
		if ((all->petit_4)[i] == n)
		{
			return (1);
		}
		i++;
		len--;
	}
	return (0);
}

int	holding_second_4(t_list *stack_hold, t_all *all)
{
	int	nbr;
	int	*n;
	int	j;

	j = 1;
	all->pos_second = 1;
	while (stack_hold)
	{
		n = (int *)stack_hold->content;
		if (verify_stack_int_4_petit(all, *n) == 1
			|| verify_stack_int_4_grand(all, *n) == 1)
		{
			if (j == all->last_value)
			{
				all->last_value--;
				break ;
			}
			j++;
		}
		all->pos_second++;
		stack_hold = stack_hold->next;
	}
	nbr = *n;
	return (nbr);
}

int	holding_first_4(t_list *stack_hold, t_all *all)
{
	int	nbr;
	int	*n;

	all->pos_first = 1;
	while (stack_hold)
	{
		n = (int *)stack_hold->content;
		if (verify_stack_int_4_petit(all, *n) == 1
			|| verify_stack_int_4_grand(all, *n) == 1)
			break ;
		all->pos_first++;
		stack_hold = stack_hold->next;
	}
	nbr = *n;
	return (nbr);
}

int	which_near_top_4(t_all *all, t_list **stack_a, t_list **stack_b)
{
	int	len_stack_b;
	int	grand;

	all->last_value = 20;
	grand = all->petit_4[9];
	while (ft_lstsize(*stack_a))
	{
		if (check_sort_stack_ps(*stack_a, *stack_b) == 1)
			return (0);
		len_stack_b = ft_lstsize(*stack_b);
		if (len_stack_b == 80)
			return (1);
		all->size_stack = ft_lstsize(*stack_a);
		all->hold_first = holding_first_4(*stack_a, all);
		all->hold_second = holding_second_4(*stack_a, all);
		all->dist_to_top_up = all->pos_first - 1;
		all->dist_to_top_back = all->size_stack - all->pos_second + 1;
		dist_to_top(all, stack_a, stack_b);
		printf("pb\n");
		push_a_to_b(stack_a, stack_b);
		gerer_stack_b(stack_b, grand);
	}
	return (1);
}
