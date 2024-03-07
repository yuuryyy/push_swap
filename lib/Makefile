# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 01:10:21 by ychagri           #+#    #+#              #
#    Updated: 2024/03/06 18:19:43 by ychagri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

ARC = ar rc

LIBRARY = libft.h

SRC = ft_isdigit.c ft_split.c \
		ft_atoi.c ft_putstr_fd.c \
		ft_strlen.c \
		ft_strjoin.c\
		ft_lstnew.c  ft_strncmp.c \
		ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c \

OBJS = $(SRC:.c=.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(ARC) $(NAME) $(OBJS)

%.o : %.c	$(LIBRARY)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)


fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean re fclean
