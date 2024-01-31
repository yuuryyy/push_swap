# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/14 22:56:18 by ychagri           #+#    #+#              #
#    Updated: 2024/01/31 22:14:39 by ychagri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

CC := cc

CFLAGS := -Wall -Wextra -Werror -fsanitize=address

SRCS	:= main.c \
		   Rules/push.c \
		   Rules/ra_rb.c \
		   Rules/rra_rrb.c \
		   Rules/swap.c parse/fill_stack.c \
		   parse/valid_arg.c \

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
