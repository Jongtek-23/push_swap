#include "push_swap.h"

int	petit_value(t_list *stack_a)
{
	int	*n;
	int	*nbr;

	n = (int *)stack_a->content;
	while (stack_a)
	{
		nbr = (int *)stack_a->content;
		if (*n > *nbr)
			n = (int *)stack_a->content;
		stack_a = stack_a->next;
	}
	return (*n);
}

void	stack_sort_out_100(t_list **stack_a, t_list **stack_b)
{
	int	n;
	int	*nbr;
	int	*number;
	int	nb_petit;

	while (ft_lstsize(*stack_a) > 0)
	{
		if (check_sort_stack_ps(*stack_a, *stack_b))
			return ;
		number = (int *)(*stack_a)->content;
		nb_petit = petit_value(*stack_a);
		if (*number == nb_petit)
		{
			nbr = (int *)(*stack_a)->content;
			push_a_to_b(stack_a, stack_b);
		}
		else
			rotate_a(stack_a);
	}
	n = ft_lstsize(*stack_b);
	while (n-- > 0)
		push_b_to_a(stack_b, stack_a);
}

int	stack_trie_to_int(t_list *tmp_a, t_all *all)
{
	int	i;
	int	len;
	int	*nbr;

	i = 0;
	len = 100;
	all->numbers = malloc(sizeof(int) * 100);
	if (all->numbers == NULL)
		return (0);
	while (tmp_a && len > 0)
	{
		nbr = (int *)tmp_a->content;
		(all->numbers)[i] = *nbr;
		tmp_a = tmp_a->next;
		len--;
		i++;
	}
	return (1);
}
