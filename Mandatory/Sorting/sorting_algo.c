/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:16:59 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/04 20:06:45 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	sorting_algo(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	t_list	*push_node;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	if (!stack_a|| !tmp_a )
		return ;
	if ( ft_lstsize(*stack_a) == 0)
		push(stack_a, stack_b, PB);
	else
	{
		push(stack_a, stack_b, PB);
		push(stack_a, stack_b, PB);
		while (ft_lstsize(*stack_a) > 3)
		{
			init_stack_a(*stack_a, *stack_b);
			push_node = cheapest_node(*stack_a);
			push_b(push_node, stack_a, push_node->target_node, stack_b);
		}
	}
	three_sort(stack_a);
	push_node = min_node(*stack_b);
	if (median_check(push_node->next, *stack_b) == 0)
		rb(push_node->next, stack_b);
	else
		rrb(push_node->next, stack_b);
	while (ft_lstsize(*stack_b))
	{
		init_stack_b(*stack_b, *stack_a);
		push_node = cheapest_node(*stack_b);
		push_a(push_node, stack_b, push_node->target_node, stack_a);
	}
	push_node = min_node(*stack_a);
	if (median_check(push_node, *stack_a) == 0)
		rb(push_node, stack_a);
	else
		rrb(push_node, stack_a);
}
