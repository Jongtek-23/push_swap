#include "../include/push_swap.h"

int	push_swap_exec(t_list **stack_a, t_list **stack_b, t_all *all)
{
	int	len;

	len = ft_lstsize(*stack_a);
	if (len == 3)
		p_s_3(stack_a, stack_b, len);
	if (len == 5)
	{
		if (p_s_5(stack_a, stack_b, len, all) == 0)
			return (0);
	}
	if (len == 100)
	{
		if (p_s_100(stack_a, stack_b, all) == 0)
			return (0);
	}
	if (len != 3 && len != 5 && len != 100)
		trie_rapide(stack_a, stack_b, all);
	return (1);
}
