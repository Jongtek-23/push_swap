#include "../include/push_swap.h"

void	funct_bastard(t_all *all, t_list *tmp_a, t_list *tmp_b)
{
	free(all->petit_1);
	free(all->grand_1);
	free(all->petit_2);
	free(all->grand_2);
	free(all->petit_3);
	free(all->grand_3);
	free(all->petit_4);
	free(all->grand_4);
	free(all->petit_5);
	free(all->grand_5);
	ft_lstclear(&tmp_a, free);
	ft_lstclear(&tmp_b, free);
	free(all->numbers);
}

int	p_s_100(t_list **stack_a, t_list **stack_b, t_all *all)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = NULL;
	tmp_b = NULL;
	if (get_new_stack(&tmp_a, all->tmp_argc, all->tmp_argv) == 0)
		return (0);
	stack_sort_out_100(&tmp_a, &tmp_b);
	if (stack_trie_to_int(tmp_a, all) == 0)
		return (0);
	if (all_chunks(all) == 0)
		return (0);
	if (all_which_near_top(all, stack_a, stack_b) == 0)
		return (0);
	all_trier_chunks(all, stack_a, stack_b);
	funct_bastard(all, tmp_a, tmp_b);
	return (1);
}
