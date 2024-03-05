/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:16:59 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/05 17:44:54 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	empty_stack_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*push_node;

	if (!stack_a || !*stack_a)
		return ;
	push(stack_a, stack_b, PB);
	push(stack_a, stack_b, PB);
	while (ft_lstsize(*stack_a) > 3)
	{
		init_stack_a(*stack_a, *stack_b);
		push_node = cheapest_node(*stack_a);
		p_b(push_node, stack_a, push_node->target_node, stack_b);
	}
}

void	sorting_algo(t_list **stack_a, t_list **stack_b)
{
	t_list	*push_node;

	if (!stack_a || !*stack_a)
		return ;
	if (ft_lstsize(*stack_a) == 4)
		push(stack_a, stack_b, PB);
	else
		empty_stack_a(stack_a, stack_b);
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
		p_a(push_node, stack_b, push_node->target_node, stack_a);
	}
	push_node = min_node(*stack_a);
	if (median_check(push_node, *stack_a) == 0)
		ra(push_node, stack_a);
	else
		rra(push_node, stack_a);
}

// arg="1 3 2" && ./push_swap $arg | ./checker_Mac $arg