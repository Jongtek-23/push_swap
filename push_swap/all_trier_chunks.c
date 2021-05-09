#include "push_swap.h"

void	move_value_top_b(t_all *all, t_list **stack_b)
{
	if (all->pos_in_stack_b < all->div)
	{
		while (all->dist_top_stack_b_up > 0)
		{
			ft_putendl_fd("rb", 1);
			rotate_b(stack_b);
			all->dist_top_stack_b_up--;
		}
	}
	else
	{
		while (all->dist_top_stack_b_back > 0)
		{
			ft_putendl_fd("rrb", 1);
			rev_rotate_b(stack_b);
			all->dist_top_stack_b_back--;
		}
	}
}

int	get_position_val(t_list *stack, int value)
{
	int	res;
	int	i;
	int	*number;

	i = 1;
	while (stack)
	{
		number = (int *)stack->content;
		if (*number == value)
			break ;
		stack = stack->next;
		i++;
	}
	res = i;
	return (res);
}

void	all_trier_chunks(t_all *all, t_list **stack_a, t_list **stack_b)
{
	trier_chunk_5_grand(all, stack_a, stack_b);
	trier_chunk_5_petit(all, stack_a, stack_b);
	trier_chunk_4_grand(all, stack_a, stack_b);
	trier_chunk_4_petit(all, stack_a, stack_b);
	trier_chunk_3_grand(all, stack_a, stack_b);
	trier_chunk_3_petit(all, stack_a, stack_b);
	trier_chunk_2_grand(all, stack_a, stack_b);
	trier_chunk_2_petit(all, stack_a, stack_b);
	trier_chunk_1_grand(all, stack_a, stack_b);
	trier_chunk_1_petit(all, stack_a, stack_b);
}
