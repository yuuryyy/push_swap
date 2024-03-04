/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:07:48 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/04 16:28:01 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a || !*stack_a || !stack_b || !*stack_b)
		return ;
	rotate(stack_a, RR);
	rotate(stack_b, RR);
	ft_putstr_fd("rr\n", 1);
}

void	rr_a(t_list **stack_a, t_list **stack_b, t_list *node_a, t_list *node_b)
{
	if (!stack_a || !stack_b || !*stack_a || !*stack_b || !node_a || !node_b)
		return ;
	while (*stack_a != node_a && *stack_b != node_b)
	{
		rr(stack_a, stack_b);
	}
	if (*stack_a != node_a || *stack_b != node_b)
	{
		if (*stack_a != node_a)
			ra(node_a, stack_a);
		else if (node_b != *stack_b)
			rb(node_b, stack_b);
	}
}
