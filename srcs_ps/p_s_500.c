/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 00:54:00 by focampo           #+#    #+#             */
/*   Updated: 2021/05/11 00:54:01 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	funct_bastard_500(t_all *all, t_list *tmp_a, t_list *tmp_b)
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
	free(all->petit_6);
	free(all->grand_6);
	free(all->petit_7);
	free(all->grand_7);
	free(all->petit_8);
	free(all->grand_8);
	free(all->petit_9);
	free(all->grand_9);
	free(all->petit_10);
	free(all->grand_10);
	free(all->petit_11);
	free(all->grand_11);
	ft_lstclear(&tmp_a, free);
	ft_lstclear(&tmp_b, free);
	free(all->numbers);
}

int	p_s_500(t_list **stack_a, t_list **stack_b, t_all *all)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = NULL;
	tmp_b = NULL;
	if (get_new_stack(&tmp_a, all->tmp_argc, all->tmp_argv) == 0)
		return (0);
	stack_sort_out_100(&tmp_a, &tmp_b);
	if (stack_trie_to_int_500(tmp_a, all) == 0)
		return (0);
	if (all_chunks_500(all) == 0)
		return (0);
	if (all_near_top_500(all, stack_a, stack_b) == 0)
		return (0);
	all_trier_chunks_500(all, stack_a, stack_b);
	funct_bastard_500(all, tmp_a, tmp_b);
	return (1);
}
