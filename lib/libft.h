/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:08:16 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/06 19:49:03 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*target_node;
	int				index;
	int				cost;
	int				pos;
}					t_list;

long	ft_atoi(char *str);
int		ft_isdigit(int c);
int		ft_lstsize(t_list *lst);

char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char const *s, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_putstr_fd(char *s, int fd);

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);

size_t	ft_strlen(const char *str);

#endif