#include "push_swap.h"

int	trie_rapide(t_list **stack_a, t_list **stack_b, t_all *all)
{
	while (ft_lstsize(*stack_a) > 0)
	{
		if (check_sort_stack_ps(*stack_a, *stack_b))
			return (1);
		all->number_trie = (int *)(*stack_a)->content;
		all->nbr_petit_trie = petit_value(*stack_a);
		if (*(all->number_trie) == all->nbr_petit_trie)
		{
			all->nbr_trie = (int *)(*stack_a)->content;
			push_a_to_b(stack_a, stack_b);
			printf("pb\n");
		}
		else
		{
			rotate_a(stack_a);
			printf("ra\n");
		}
	}
	all->n_trie = ft_lstsize(*stack_b);
	while ((all->n_trie)-- > 0)
	{
		push_b_to_a(stack_b, stack_a);
		printf("pa\n");
	}
	return (1);
}
