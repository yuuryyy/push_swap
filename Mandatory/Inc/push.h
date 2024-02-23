/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:48:28 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/22 17:59:14 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# include "../../lib/libft.h"
# include <limits.h>
# include <stdbool.h>

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


int	valid_arg(int ac, char **av);
int	check_n_fill(t_list **stack_a, char **av);
int	a_is_sorted(t_list *stack_a);

void	two_sort(t_list **lst);
void	three_sort(t_list **lst);

void	swap(t_list **lst , int flag);
void	ss(t_list **stack_a, t_list **stack_b);
void	push(t_list **from, t_list **to, int flag);
void	rotate(t_list	**lst, int flag);
void	rr(t_list **stack_a, t_list **stack_b);
void	reverse_rotate(t_list **lst, int flag);
void	rrr(t_list **stack_a, t_list **stack_b);

#endif