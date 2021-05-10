/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: focampo <focampo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:47:37 by focampo           #+#    #+#             */
/*   Updated: 2021/05/10 10:47:40 by focampo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

# define MAX_VALUE 2147483647
# define MIN_VALUE -2147483648

typedef struct s_ps_5
{
	int		petit;
	int		grand;
	t_list	*res_p_s_A;
	t_list	*res_p_s_B;
}				t_ps_5;

typedef struct s_all
{
	int		*numbers;
	int		tmp_argc;
	char	**tmp_argv;
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*tmp_stack_a;
	t_list	*tmp_stack_b;
	int		*petit_1;
	int		*grand_1;
	int		*petit_2;
	int		*grand_2;
	int		*petit_3;
	int		*grand_3;
	int		*petit_4;
	int		*grand_4;
	int		*petit_5;
	int		*grand_5;
	int		last_value;
	int		size_stack;
	int		hold_first;
	int		hold_second;
	int		pos_first;
	int		pos_second;
	int		dist_to_top_up;
	int		dist_to_top_back;
	int		boucle;
	int		iterate;
	int		div;
	int		value_choose;
	int		pos_in_stack_b;
	int		dist_top_stack_b_up;
	int		dist_top_stack_b_back;
	int		n_trie;
	int		*nbr_trie;
	int		*number_trie;
	int		nbr_petit_trie;
	int		i_is_double;
	int		j_is_double;
	int		len_is_double;
	int		*petit_6;
	int		*grand_6;
	int		*petit_7;
	int		*grand_7;
	int		*petit_8;
	int		*grand_8;
	int		*petit_9;
	int		*grand_9;
	int		*petit_10;
	int		*grand_10;
	int		*petit_11;
	int		*grand_11;
}				t_all;

int		main(int argc, char *argv[]);
int		init(t_list **stack_a, int argc, char **argv);
int		with_2_argc(t_list **stack_a, int argc, char **argv);
int		with_more_argc(t_list **stack_a, int argc, char **argv);

int		verif_values(int argc, char **argv, t_all *all);
int		ft_is_double_plus(int argc, char **argv);
int		check_more_argc(int argc, char **argv);
int		ft_is_double(int argc, char **argv, t_all *all);
int		ft_strlen_str(char **str);
int		check_2_argc(int argc, char **argv);
int		ft_is_integer(char *str);
int		ft_is_nbr(char *str);

int		*allocation_int(int nbr);
void	ft_free_split(char **split);
void	ft_free_and_exit(t_list *stack, char **str);
int		ft_strcmp(char *s1, char *s2);

int		check_sort_stack_ps(t_list *stack_a, t_list *stack_b);
int		get_new_stack(t_list **stack_a, int argc, char **argv);

int		push_swap_exec(t_list **stack_a, t_list **stack_b, t_all *all);

int		trie_rapide(t_list **stack_a, t_list **stack_b, t_all *all);
int		petit_value(t_list *stack_a);

void	p_s_3(t_list **stack_a, t_list **stack_b, int len);

int		p_s_5(t_list **stack_a, t_list **stack_b, int len, t_all *all);
t_list	*iterate_stack(t_list **tmp_a, t_list **tmp_b, int len, t_ps_5 *for_5);
t_list	*p_s_3_for_5(t_list *tmp_a, t_list *tmp_b);
t_list	*p_s_3_for_5bis(t_list *tmp_a, int *n_1, int *n_2, int *n_3);
t_list	*p_s_3_for_5bis_2(t_list *tmp_a, int *n_1, int *n_2, int *n_3);
void	finish_p_s_5(t_list **res_p_s_A, t_list **res_p_s_B);

int		p_s_100(t_list **stack_a, t_list **stack_b, t_all *all);
void	stack_sort_out_100(t_list **stack_a, t_list **stack_b);
int		stack_trie_to_int(t_list *tmp_a, t_all *all);
int		all_chunks(t_all *all);
int		stack_chunk_1(t_all *all);
int		stack_chunk_2(t_all *all);
int		stack_chunk_3(t_all *all);
int		stack_chunk_4(t_all *all);
int		stack_chunk_5(t_all *all);
int		all_which_near_top(t_all *all, t_list **stack_a, t_list **stack_b);
void	gerer_stack_b(t_list **stack_b, int grand);
void	dist_to_top(t_all *all, t_list **stack_a, t_list **stack_b);
int		which_near_top_1(t_all *all, t_list **stack_a, t_list **stack_b);
int		which_near_top_2(t_all *all, t_list **stack_a, t_list **stack_b);
int		which_near_top_3(t_all *all, t_list **stack_a, t_list **stack_b);
int		which_near_top_4(t_all *all, t_list **stack_a, t_list **stack_b);
int		which_near_top_5(t_all *all, t_list **stack_a, t_list **stack_b);
void	all_trier_chunks(t_all *all, t_list **stack_a, t_list **stack_b);
int		get_position_val(t_list *stack, int value);
void	move_value_top_b(t_all *all, t_list **stack_b);
void	trier_chunk_5_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	trier_chunk_5_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	trier_chunk_4_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	trier_chunk_4_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	trier_chunk_3_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	trier_chunk_3_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	trier_chunk_2_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	trier_chunk_2_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	trier_chunk_1_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	trier_chunk_1_petit(t_all *all, t_list **stack_a, t_list **stack_b);

int p_s_500(t_list **stack_a, t_list **stack_b, t_all *all);
int	stack_trie_to_int_500(t_list *tmp_a, t_all *all);
int	all_chunks_500(t_all *all);
int	s_c_500_1(t_all *all);
int	s_c_500_2(t_all *all);
int	s_c_500_3(t_all *all);
int	s_c_500_4(t_all *all);
int	s_c_500_5(t_all *all);
int	s_c_500_6(t_all *all);
int	s_c_500_7(t_all *all);
int	s_c_500_8(t_all *all);
int	s_c_500_9(t_all *all);
int	s_c_500_10(t_all *all);
int	s_c_500_11(t_all *all);
int	all_near_top_500(t_all *all, t_list **stack_a, t_list **stack_b);
int	near_top_500_1(t_all *all, t_list **stack_a, t_list **stack_b);
int	near_top_500_2(t_all *all, t_list **stack_a, t_list **stack_b);
int	near_top_500_3(t_all *all, t_list **stack_a, t_list **stack_b);
int	near_top_500_4(t_all *all, t_list **stack_a, t_list **stack_b);
int	near_top_500_5(t_all *all, t_list **stack_a, t_list **stack_b);
int	near_top_500_6(t_all *all, t_list **stack_a, t_list **stack_b);
int	near_top_500_7(t_all *all, t_list **stack_a, t_list **stack_b);
int	near_top_500_8(t_all *all, t_list **stack_a, t_list **stack_b);
int	near_top_500_9(t_all *all, t_list **stack_a, t_list **stack_b);
int	near_top_500_10(t_all *all, t_list **stack_a, t_list **stack_b);
int	near_top_500_11(t_all *all, t_list **stack_a, t_list **stack_b);
void	all_trier_chunks_500(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_11_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_11_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_10_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_10_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_9_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_9_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_8_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_8_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_7_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_7_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_6_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_6_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_5_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_5_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_4_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_4_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_3_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_3_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_2_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_2_petit(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_1_grand(t_all *all, t_list **stack_a, t_list **stack_b);
void	t_c_500_1_petit(t_all *all, t_list **stack_a, t_list **stack_b);

int		find_greater(t_list *stack_a);
int		find_small(t_list *stack_a);

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

#endif
