# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/14 22:56:18 by ychagri           #+#    #+#              #
#    Updated: 2024/01/27 11:57:11 by ychagri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

CC := cc

CFLAGS := -Wall -Wextra -Werror

SRCS	:= main.c 

OBJS 	:= $(SRCS:.c=.o)

LIBRARY := libft/libft.a

all	: $(NAME)
	
lib	:
	make -C libft

$(NAME): $(OBJS) lib
	$(CC) $(CFLAGS) $(LIBRARY) $(OBJS) -o $(NAME)

%.o : %.c	push.h
	$(CC) $(CFLAGS) -c $<

clean:
	make clean -C libft
	rm -rf $(OBJS) 
	

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)

re : fclean all 

.PHONY: clean all re fclean
