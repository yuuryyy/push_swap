/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:48:28 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/12 21:34:38 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# include "../../lib/libft.h"
# include <limits.h>
# include <stdbool.h>

# define BUFFER_SIZE 10

# define TRUE 1
# define FALSE 0

# define SA 0
# define SB 1
# define SS 2

# define PA 0
# define PB 1

# define RA 0
# define RB 1
# define RR 2

# define RRA 0
# define RRB 1
# define RRR 2

int		valid_arg(int ac, char **av);
int		check_n_fill(t_list **stack_a, char **av);
int		median_check(t_list *node, t_list *stack);
int		a_is_sorted(t_list *stack_a);
int		position(t_list *node, t_list *stack);
int		checker(char **av);

void	two_sort(t_list **lst);
void	three_sort(t_list **lst);
void	free_stack(t_list **stack);

void	swap(t_list **lst, int flag);
void	free_array(char **str);
void	ss(t_list **stack_a, t_list **stack_b, int flag);
void	push(t_list **from, t_list **to, int flag);
void	rotate(t_list **lst, int flag);
void	ra(t_list *node, t_list **stack);
void	rb(t_list *node, t_list **stack);
void	rr(t_list **stack_a, t_list **stack_b, int flag);
void	reverse_rotate(t_list **lst, int flag);
void	rrr(t_list **stack_a, t_list **stack_b, int flag);
void	target_node_a(t_list *stack_b, t_list *a_node);
void	target_node_b(t_list *stack_a, t_list *b_node);
void	nude_cost(t_list *node, t_list *stack, t_list *target, t_list *t_stack);
void	sorting_algo(t_list **stack_a, t_list **stack_b);
void	init_stack_a(t_list *stack_a, t_list *stack_b);
void	init_stack_b(t_list *stack_b, t_list *stack_a);
void	rr_a(t_list **stack_a, t_list **stack_b, t_list *node, t_list *target);
void	rrrn(t_list **stack_a, t_list **stack_b, t_list *node, t_list *target);
void	rra(t_list *node, t_list **stack);
void	rrb(t_list *node, t_list **stack);
void	p_b(t_list *node_a, t_list **stack_a, t_list *node_b, t_list **stack_b);
void	p_a(t_list *node_b, t_list **stack_b, t_list *node_a, t_list **stack_a);

t_list	*max_node(t_list *stack);
t_list	*min_node(t_list *stack);
t_list	*cheapest_node(t_list *stack);

char	*get_next_line(int fd);
char	*ft_strjoin2(char *s1, char *s2);
int		ft_strchr(const char *s, int c);

#endif