#include "../include/push_swap.h"

void	swap_2_first_a(t_list **stack)
{
	void	*tmp_content;

	if (stack == NULL)
		return ;
	tmp_content = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp_content;
}

void	swap_2_first_b(t_list **stack)
{
	void	*tmp_content;

	if (stack == NULL)
		return ;
	tmp_content = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp_content;
}

void	swap_2_first_a_b(t_list **stack_a, t_list **stack_b)
{
	swap_2_first_a(stack_a);
	swap_2_first_b(stack_b);
}
