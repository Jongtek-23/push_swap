#include "checker.h"

int	check_sort_stack(t_list *stack_a, t_list *stack_b)
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
