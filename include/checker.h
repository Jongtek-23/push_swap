/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:47:16 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:47:19 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "get_next_line.h"

# define MAX_VALUE 2147483647
# define MIN_VALUE -2147483648

typedef struct s_all
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*str;
	t_list	*hihi;
	int		len_is_double;
}				t_all;

int		handling_types(t_list **stack_a, t_list **stack_b, t_all *all);

int		check_sort_stack(t_list *stack_a, t_list *stack_b);

int		verif_values(int argc, char **argv, t_all *all);

int		check_2_argc(int argc, char **argv);
int		ft_is_integer(char *str);
int		ft_is_nbr(char *str);
int		ft_is_double(int argc, char **argv, t_all *all);

void	push_a_to_b(t_list **from_a, t_list **to_b);
void	push_b_to_a(t_list **from_b, t_list **to_a);
void	rev_rotate_a(t_list **stack_a);
void	rev_rotate_b(t_list **stack_b);
void	rev_rotate_a_b(t_list **stack_a, t_list **stack_b);
void	rotate_a(t_list **stack_a);
void	rotate_b(t_list **stack_b);
void	rotate_a_b(t_list **stack_a, t_list **stack_b);
void	swap_2_first_a(t_list **stack);
void	swap_2_first_b(t_list **stack);
void	swap_2_first_a_b(t_list **stack_a, t_list **stack_b);

int		ft_strcmp(char *s1, char *s2);
int		*allocation_int(int nbr);
void	ft_free_split(char **split);

void	view_of_stacks(t_list *stack_a, t_list *stack_b);

#endif
