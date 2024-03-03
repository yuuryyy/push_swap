# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/14 22:56:18 by ychagri           #+#    #+#              #
#    Updated: 2024/03/03 22:14:14 by ychagri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

CC := cc

CFLAGS := -g -Wall -Werror 
#-Wextra -fsanitize=address
SRCS	:= Mandatory/main.c \
		   Mandatory/Rules/push.c \
		   Mandatory/Rules/rotate.c \
		   Mandatory/Rules/rr.c \
		   Mandatory/Rules/swap.c \
		   Mandatory/Rules/ss.c \
		   Mandatory/Rules/reverse_rotate.c \
		   Mandatory/Rules/rrr.c \
		   Mandatory/parse/valid_arg.c \
		   Mandatory/parse/fill_stack.c \
		   Mandatory/Sorting/2_elem_sort.c \
		   Mandatory/Sorting/3_elem_sort.c \
		   Mandatory/Sorting/sorting_algo.c \
		   Mandatory/tools/A_is_sorted.c \
		   Mandatory/tools/free_stack.c \
		   Mandatory/tools/max_node.c \
		   Mandatory/tools/min_node.c \
		   Mandatory/tools/target_node_a.c \
		   Mandatory/tools/target_node_b.c \
		   Mandatory/tools/nude_cost.c \
		   Mandatory/tools/init_stack.c \
		   Mandatory/tools/cheapest_node.c

OBJS 	:= $(SRCS:.c=.o)

LIBRARY := lib/libft.a

all	: $(NAME)
	
lib :
	make -C lib

$(NAME): $(OBJS) lib
	$(CC) $(CFLAGS) $(LIBRARY) $(OBJS) -o $(NAME)

%.o : %.c push.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	make clean -C lib
	rm -rf $(OBJS)

fclean: clean
	make fclean -C lib
	rm -rf $(NAME)

re : fclean all 

git : fclean
	git add .
	git status
	git commit -m "push_swap_fixs"
	git push

.PHONY: clean re fclean lib
