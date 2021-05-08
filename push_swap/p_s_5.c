#include "push_swap.h"

t_list	*p_s_3_for_5bis_2(t_list *tmp_a, int *n_1, int *n_2, int *n_3)
{
	t_list	*tmp_res;

	if (*n_1 > *n_2 && *n_2 < *n_3 && *n_3 < *n_1)
	{
		printf("ra\n");
		rotate_a(&tmp_a);
	}
	else if (*n_1 < *n_2 && *n_2 > *n_3 && *n_3 > *n_1)
	{
		printf("sa\n");
		swap_2_first_a(&tmp_a);
		printf("ra\n");
		rotate_a(&tmp_a);
	}
	else if (*n_1 < *n_2 && *n_2 > *n_3 && *n_3 < *n_1)
	{
		printf("rra\n");
		rev_rotate_a(&tmp_a);
	}
	tmp_res = tmp_a;
	return (tmp_res);
}

t_list	*p_s_3_for_5bis(t_list *tmp_a, int *n_1, int *n_2, int *n_3)
{
	t_list	*tmp_res;
	t_list	*tmp_res_2;

	tmp_res = NULL;
	tmp_res_2 = NULL;
	if (*n_1 > *n_2 && *n_2 < *n_3 && *n_3 > *n_1)
	{
		printf("sa\n");
		swap_2_first_a(&tmp_a);
		tmp_res = tmp_a;
	}
	else if (*n_1 > *n_2 && *n_2 > *n_3 && *n_3 < *n_1)
	{
		printf("sa\n");
		swap_2_first_a(&tmp_a);
		printf("rra\n");
		rev_rotate_a(&tmp_a);
		tmp_res = tmp_a;
	}
	else
	{
		tmp_res_2 = p_s_3_for_5bis_2(tmp_a, n_1, n_2, n_3);
		tmp_res = tmp_res_2;
	}
	return (tmp_res);
}

t_list	*p_s_3_for_5(t_list *tmp_a, t_list *tmp_b)
{
	int		*n_1;
	int		*n_2;
	int		*n_3;
	t_list	*res;
	t_list	*res_tmp;

	res = NULL;
	res_tmp = NULL;
	n_1 = (int *)tmp_a->content;
	n_2 = (int *)tmp_a->next->content;
	n_3 = (int *)tmp_a->next->next->content;
	res_tmp = p_s_3_for_5bis(tmp_a, n_1, n_2, n_3);
	res = res_tmp;
	return (res);
}

t_list	*iterate_stack(t_list **tmp_a, t_list **tmp_b, int len, t_ps_5 *for_5)
{
	int		*nbr;
	t_list	*res;

	while (*tmp_a && len)
	{
		nbr = (int *)(*tmp_a)->content;
		if ((*tmp_a)->next == NULL || (ft_lstsize(*tmp_b) == 2))
			break ;
		if (*nbr == for_5->grand || *nbr == for_5->petit)
		{
			printf("pb\n");
			if (*tmp_b != NULL)
				push_a_to_b(tmp_a, tmp_b);
			else
				push_a_to_b(tmp_a, tmp_b);
			res = *tmp_b;
		}
		else
		{
			printf("ra\n");
			rotate_a(tmp_a);
		}
		len--;
	}
	return (res);
}

int	p_s_5(t_list **stack_a, t_list **stack_b, int len, t_all *all)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	int		*value;
	t_ps_5	for_ps_5;

	tmp_a = NULL;
	tmp_b = NULL;
	if (get_new_stack(&tmp_a, all->tmp_argc, all->tmp_argv) == 0)
		return (0);
	for_ps_5.petit = find_small(tmp_a);
	for_ps_5.grand = find_greater(tmp_a);
	for_ps_5.res_p_s_B = iterate_stack(&tmp_a, &tmp_b, len, &for_ps_5);
	for_ps_5.res_p_s_A = p_s_3_for_5(tmp_a, tmp_b);
	finish_p_s_5(&(for_ps_5.res_p_s_A), &(for_ps_5.res_p_s_B));
	ft_lstclear(&(for_ps_5.res_p_s_A), free);
	return (1);
}
