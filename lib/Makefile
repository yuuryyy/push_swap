# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 01:10:21 by ychagri           #+#    #+#              #
#    Updated: 2023/11/11 02:26:36 by ychagri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror

ARC = ar rc

LIBRARY = libft.h

SRC = ft_isdigit.c ft_memset.c  ft_isprint.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_bzero.c   ft_atoi.c ft_strncmp.c ft_memchr.c ft_putstr_fd.c ft_striteri.c \
		ft_tolower.c  ft_strlen.c  ft_strlcat.c ft_calloc.c ft_putnbr_fd.c  \
		ft_toupper.c ft_isalnum.c ft_strrchr.c  ft_strlcpy.c ft_memcmp.c ft_putendl_fd.c \
		ft_isalpha.c ft_memcpy.c ft_strchr.c   ft_strnstr.c ft_strjoin.c ft_strtrim.c  \
		ft_isascii.c ft_memmove.c ft_isascii.c ft_strchr.c ft_strdup.c ft_substr.c ft_putchar_fd.c \

OBJS = $(SRC:.c=.o)

SRC_BONUS = ft_lstnew.c  ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c\

OBJS_BONUS = $(SRC_BONUS:.c=.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(ARC) $(NAME) $(OBJS)

%.o : %.c	$(LIBRARY)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(OBJS_BONUS)
	
bonus : $(OBJS_BONUS)
		$(ARC) $(NAME) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re : fclean all bonus

.PHONY: clean all re bonus fclean
