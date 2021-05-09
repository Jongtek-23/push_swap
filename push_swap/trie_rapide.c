#include "push_swap.h"

int	trie_rapide(t_list **stack_a, t_list **stack_b, t_all *all)
{
	int	n;
	int	*nbr;
	int	*number;
	int	nb_petit;

	while (ft_lstsize(*stack_a) > 0)
	{
		if (check_sort_stack_ps(*stack_a, *stack_b))
			return (1);
		number = (int *)(*stack_a)->content;
		nb_petit = petit_value(*stack_a);
		if (*number == nb_petit)
		{
			nbr = (int *)(*stack_a)->content;
			push_a_to_b(stack_a, stack_b);
            printf("pb\n");
		}
		else
        {
			rotate_a(stack_a);
            printf("ra\n");
        }
    }
	n = ft_lstsize(*stack_b);
	while (n-- > 0)
    {
		push_b_to_a(stack_b, stack_a);
        printf("pa\n");
    }
    return (1);
}
