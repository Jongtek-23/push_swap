#include "push_swap.h"

int	get_tmp_value_petit_5(t_all *all)
{
	int	nbr;
	int	len;
	int	i;

	len = 10;
	i = 0;
	while (len > 0)
	{
		if (i == all->iterate)
		{
			all->iterate--;
			break ;
		}
		i++;
		len--;
	}
	nbr = all->petit_5[i];
	return (nbr);
}

int	get_tmp_value_grand_5(t_all *all)
{
	int	nbr;
	int	len;
	int	i;

	len = 10;
	i = 0;
	while (len > 0)
	{
		if (i == all->iterate)
		{
			all->iterate--;
			break ;
		}
		i++;
		len--;
	}
	nbr = all->grand_5[i];
	return (nbr);
}

void	trier_chunk_5_petit(t_all *all, t_list **stack_a, t_list **stack_b)
{
	int		len_b;
	int		i;
	t_list	*tmp;
	int		*tmp_value;

	all->boucle = 10;
	all->iterate = 9;
	while (all->boucle > 0)
	{
		len_b = ft_lstsize(*stack_b);
		all->div = len_b / 2;
		all->value_choose = get_tmp_value_petit_5(all);
		all->pos_in_stack_b = get_position_val(*stack_b, all->value_choose);
		all->dist_top_stack_b_up = all->pos_in_stack_b - 1;
		all->dist_top_stack_b_back = len_b - all->pos_in_stack_b + 1;
		move_value_top_b(all, stack_b);
		printf("pa\n");
		push_b_to_a(stack_b, stack_a);
		all->boucle--;
	}
}

void	trier_chunk_5_grand(t_all *all, t_list **stack_a, t_list **stack_b)
{
	int		len_b;
	int		i;
	t_list	*tmp;
	int		*tmp_value;

	all->boucle = 10;
	all->iterate = 9;
	while (all->boucle > 0)
	{
		len_b = ft_lstsize(*stack_b);
		all->div = len_b / 2;
		all->value_choose = get_tmp_value_grand_5(all);
		all->pos_in_stack_b = get_position_val(*stack_b, all->value_choose);
		all->dist_top_stack_b_up = all->pos_in_stack_b - 1;
		all->dist_top_stack_b_back = len_b - all->pos_in_stack_b + 1;
		move_value_top_b(all, stack_b);
		printf("pa\n");
		push_b_to_a(stack_b, stack_a);
		all->boucle--;
	}
}
