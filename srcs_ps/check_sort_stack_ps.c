#include "../include/push_swap.h"

int	check_sort_stack_ps(t_list *stack_a, t_list *stack_b)
{
	int	*a;
	int	*b;

	if (stack_b != NULL || stack_a == NULL)
		return (0);
	while (stack_a && stack_a->next)
	{
		a = (int *)stack_a->content;
		b = (int *)stack_a->next->content;
		if (*a > *b)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	get_new_stack(t_list **stack_a, int argc, char **argv)
{
	if (argc == 2)
	{
		if (with_2_argc(stack_a, argc, argv) == 0)
			return (0);
	}
	else
		if (with_more_argc(stack_a, argc, argv) == 0)
			return (0);
	return (1);
}
