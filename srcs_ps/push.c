/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:51:55 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:51:56 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstdelone_me(t_list *lst)
{
	if (lst != NULL)
		free(lst);
}

void	ft_lstdel_front(t_list **lst)
{
	t_list	*ptr;
	t_list	*tmp;

	if (lst == 0)
		return ;
	ptr = (*lst);
	tmp = ptr->next;
	ft_lstdelone_me(ptr);
	(*lst) = tmp;
}

void	push_a_to_b(t_list **from_a, t_list **to_b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	if (*from_a == NULL)
		return ;
	tmp_a = *from_a;
	tmp_b = *to_b;
	ft_lstadd_front(to_b, ft_lstnew((*from_a)->content));
	ft_lstdel_front(from_a);
}

void	push_b_to_a(t_list **from_b, t_list **to_a)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	if (from_b == NULL || *from_b == NULL)
		return ;
	tmp_b = *from_b;
	tmp_a = *to_a;
	ft_lstadd_front(to_a, ft_lstnew((*from_b)->content));
	ft_lstdel_front(from_b);
}
