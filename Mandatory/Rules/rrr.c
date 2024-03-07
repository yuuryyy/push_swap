/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:54:59 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/07 18:27:25 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	rrr(t_list **stack_a, t_list **stack_b, int flag)
{
	if (!stack_a || !stack_b)
		return ;
	reverse_rotate(stack_a, RRR);
	reverse_rotate(stack_b, RRR);
	if (flag == RRR)
		ft_putstr_fd("rrr\n", 1);
}

void	rrrn(t_list **stack_a, t_list **stack_b, t_list *node_a, t_list *node_b)
{
	if (!stack_a || !stack_b || !node_a || !node_b)
		return ;
	while (*stack_a != node_a && *stack_b != node_b)
		rrr(stack_a, stack_b, RRA);
	if (*stack_a != node_a || *stack_b != node_b)
	{
		if (*stack_a != node_a)
			rra(node_a, stack_a);
		else if (node_b != *stack_b)
			rrb(node_b, stack_b);
	}
}
