#include "../include/checker.h"

void	rotate_a(t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_a == NULL || ft_lstsize(*stack_a) == 1)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_a, tmp);
}

void	rotate_b(t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b == NULL || ft_lstsize(*stack_b) == 1)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_b, tmp);
}

void	rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}
