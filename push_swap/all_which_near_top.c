#include "push_swap.h"

void	dist_to_top(t_all *all, t_list **stack_a, t_list **stack_b)
{
	if (all->dist_to_top_up < all->dist_to_top_back)
	{
		while (all->dist_to_top_up > 0)
		{
			ft_putendl_fd("ra", 1);
			rotate_a(stack_a);
			all->dist_to_top_up--;
		}
	}
	else
	{
		while (all->dist_to_top_back > 0)
		{
			ft_putendl_fd("rra", 1);
			rev_rotate_a(stack_a);
			all->dist_to_top_back--;
		}
	}
}

void	gerer_stack_b(t_list **stack_b, int grand)
{
	int	*nbr_b;

	if (ft_lstsize(*stack_b) > 1)
	{
		nbr_b = (int *)(*stack_b)->content;
		if (*nbr_b <= grand)
		{
			ft_putendl_fd("rb", 1);
			rotate_b(stack_b);
		}
	}
}

int	all_which_near_top(t_all *all, t_list **stack_a, t_list **stack_b)
{
	if (which_near_top_1(all, stack_a, stack_b) == 0)
		return (0);
	if (which_near_top_2(all, stack_a, stack_b) == 0)
		return (0);
	if (which_near_top_3(all, stack_a, stack_b) == 0)
		return (0);
	if (which_near_top_4(all, stack_a, stack_b) == 0)
		return (0);
	if (which_near_top_5(all, stack_a, stack_b) == 0)
		return (0);
	return (1);
}
