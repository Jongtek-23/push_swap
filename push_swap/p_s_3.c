#include "push_swap.h"

void	p_s_3(t_list **stack_a, t_list **stack_b, int len)
{
	int	*nbr_1;
	int	*nbr_2;
	int	*nbr_3;

	nbr_1 = (int *)(*stack_a)->content;
	nbr_2 = (int *)(*stack_a)->next->content;
	nbr_3 = (int *)(*stack_a)->next->next->content;
	if (*nbr_1 > *nbr_2 && *nbr_2 < *nbr_3 && *nbr_3 > *nbr_1)
		printf("sa\n");
	else if (*nbr_1 > *nbr_2 && *nbr_2 > *nbr_3 && *nbr_3 < *nbr_1)
	{
		printf("sa\n");
		printf("rra\n");
	}
	else if (*nbr_1 > *nbr_2 && *nbr_2 < *nbr_3 && *nbr_3 < *nbr_1)
		printf("ra\n");
	else if (*nbr_1 < *nbr_2 && *nbr_2 > *nbr_3 && *nbr_3 > *nbr_1)
	{
		printf("sa\n");
		printf("ra\n");
	}
	else if (*nbr_1 < *nbr_2 && *nbr_2 > *nbr_3 && *nbr_3 < *nbr_1)
		printf("rra\n");
}
