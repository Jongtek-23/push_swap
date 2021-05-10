# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: focampo <focampo@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 10:49:45 by focampo           #+#    #+#              #
#    Updated: 2021/05/10 10:49:47 by focampo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER = checker
PUSH_SWAP = push_swap
NAME = $(CHECKER) $(PUSH_SWAP)

CC = gcc
CFLAFS = -Wall -Werror -Wextra

LIBFT_DIR = ./libft
LIBFT_A = $(LIBFT_DIR)/libft.a

INCS = -I./include -I./libft
INCLIB = -L ./$(LIBFT_DIR) -lft

RM = rm -rf

FILES_CHECKER = checker.c check_2_argc.c check_sort_stack.c get_next_line.c \
				get_next_line_utils.c handling_types.c outils.c push.c \
				rev_rotate.c rotate.c swap_first_2.c verif_values.c \
				view_of_stacks.c


FILES_P_S = push_swap.c all_chunk.c all_trier_chunks.c all_which_near_top.c \
			check_2_argc_ps.c check_sort_stack_ps.c chunk_1_2.c chunk_3_4.c \
			find_small_greater.c finish_p_s_5.c outils.c p_s_100.c p_s_3.c \
			p_s_5.c push.c push_swap_exec.c rev_rotate.c rotate.c \
			stack_sort_out_100.c swap_first_2.c trie_rapide.c trier_chunk_1.c \
			trier_chunk_2.c trier_chunk_3.c trier_chunk_4.c trier_chunk_5.c \
			verif_values_ps.c which_near_top_1.c which_near_top_2.c \
			which_near_top_3.c which_near_top_4.c which_near_top_5.c \
			p_s_500.c all_chunk_500.c all_near_top_500.c all_trier_chunks_500.c \
			near_top_500_1.c near_top_500_2.c near_top_500_3.c near_top_500_4.c \
			near_top_500_5.c near_top_500_6.c near_top_500_7.c near_top_500_8.c \
			near_top_500_9.c near_top_500_10.c near_top_500_11.c s_c_500_1.c \
			s_c_500_11.c s_c_500_3_4.c s_c_500_5_6.c s_c_500_7_8.c s_c_500_9_10.c \
			t_c_500_1.c t_c_500_2.c t_c_500_3.c t_c_500_4.c t_c_500_5.c \
			t_c_500_6.c t_c_500_7.c t_c_500_8.c t_c_500_9.c t_c_500_10.c t_c_500_11.c \
			view_of_stacks.c

SRCS_CHECKER = $(addprefix srcs_checker/, $(FILES_CHECKER))
OBJS_CHECKER = $(SRCS_CHECKER:.c=.o)
SRCS_P_S = $(addprefix srcs_ps/, $(FILES_P_S))
OBJS_P_S = $(SRCS_P_S:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_CHECKER) $(OBJS_P_S)
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAFS) $(INCS) -o $(CHECKER) $(OBJS_CHECKER) $(INCLIB)
	$(CC) $(CFLAFS) $(INCS) -o $(PUSH_SWAP) $(OBJS_P_S) $(INCLIB)

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJS_CHECKER) $(OBJS_P_S)

fclean: clean
	$(RM) $(NAME) $(LIBFT_A)

re: fclean clean
