# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/14 22:56:18 by ychagri           #+#    #+#              #
#    Updated: 2024/02/22 20:00:17 by ychagri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

CC := cc

CFLAGS := -Wall -Werror -Wextra -fsanitize=address
SRCS	:= main.c \
		   Rules/push.c \
		   Rules/rotate.c \
		   Rules/rr.c \
		   Rules/swap.c \
		   Rules/ss.c \
		   Rules/reverse_rotate.c \
		   Rules/rrr.c \
		   parse/valid_arg.c \
		   parse/fill_stack.c \
		   Sorting/2_elem_sort.c \
		   Sorting/3_elem_sort.c \
		   tools/A_is_sorted.c \

OBJS 	:= $(SRCS:.c=.o)

LIBRARY := ../lib/libft.a

all	: $(NAME)
	
lib	:
	make -C ../lib

$(NAME): $(OBJS) lib
	$(CC) $(CFLAGS) $(LIBRARY) $(OBJS) -o $(NAME)

%.o : %.c push.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	make clean -C ../lib
	rm -rf $(OBJS) 
	

fclean: clean
	make fclean -C ../lib
	rm -rf $(NAME)

re : fclean all 

.PHONY: clean re fclean

#relink