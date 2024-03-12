# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 18:44:01 by ychagri           #+#    #+#              #
#    Updated: 2024/03/12 21:35:02 by ychagri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

NAME_B := checker

CC := cc

CFLAGS := -Wall -Werror -Wextra

SRCS	:= Mandatory/main.c \
		   Mandatory/Sorting/2_elem_sort.c \
		   Mandatory/Sorting/3_elem_sort.c \
		   Mandatory/Sorting/sorting_algo.c \

SRCS_G :=  Mandatory/Rules/push.c \
		   Mandatory/Rules/rotate.c \
		   Mandatory/Rules/rr.c \
		   Mandatory/Rules/swap.c \
		   Mandatory/Rules/ss.c \
		   Mandatory/Rules/reverse_rotate.c \
		   Mandatory/Rules/rrr.c \
		   Mandatory/parse/valid_arg.c \
		   Mandatory/parse/fill_stack.c \
		   Mandatory/Parse/free_array.c \
		   Mandatory/tools/A_is_sorted.c \
		   Mandatory/tools/free_stack.c \
		   Mandatory/tools/max_node.c \
		   Mandatory/tools/min_node.c \
		   Mandatory/tools/target_node_a.c \
		   Mandatory/tools/target_node_b.c \
		   Mandatory/tools/nude_cost.c \
		   Mandatory/tools/init_stack.c \
		   Mandatory/tools/cheapest_node.c
		   
SRCS_B	:=	bonus/Get_next_line/get_next_line_utils.c \
			bonus/Get_next_line/get_next_line.c \
			bonus/checker.c \
			bonus/main.c \
			
OBJS_B	:= $(SRCS_B:.c=.o)

OBJS 	:= $(SRCS:.c=.o)

OBJ_G 	:= $(SRCS_G:.c=.o)

LIBRARY := lib/libft.a

all	: $(NAME)

bonus : $(NAME_B)

lib :
	make -C lib

$(NAME): $(OBJ_G) $(OBJS) lib
	$(CC) $(CFLAGS) $(LIBRARY) $(OBJ_G) $(OBJS) -o $(NAME)

$(NAME_B): $(OBJ_G) $(OBJS_B) lib
	$(CC) $(CFLAGS) $(LIBRARY) $(OBJ_G) $(OBJS_B) -o $(NAME_B)

%.o : %.c Mandatory/Inc/push.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C lib
	rm -rf $(OBJS) $(OBJ_G) $(OBJS_B)

fclean: clean
	make fclean -C lib
	rm -rf $(NAME) $(NAME_B)

re : fclean all 

.PHONY: clean re fclean lib bonus
