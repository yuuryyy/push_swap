/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:46:56 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/04 20:04:01 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	push(t_list **from, t_list **to, int flag)
{
	t_list	*tmp;

	if (!from || !*from || !to)
		return ;
	tmp = *from;
	if (tmp->next)
		*from = tmp->next;
	else
		*from = NULL;
	tmp->next = NULL;
	ft_lstadd_front(to, tmp);
	if (flag == PA)
		ft_putstr_fd("pa\n", 1);
	else if (flag == PB)
		ft_putstr_fd("pb\n", 1);
}

void	push_a(t_list *node_b, t_list **stack_b, t_list *node_a, t_list **stack_a)
{
	int	pos;
	int	pos_t;
	
	if (!node_a || !*stack_a || !node_b || !*stack_b || !stack_a || !stack_b)
		return ;	
	if (node_b->cost == 0)
	{
		
		push(stack_b, stack_a, PA);
		return ;
	}
	pos_t = median_check(node_a, *stack_a);
	pos = median_check(node_b, *stack_b);
	if (pos == pos_t || position(node_a, *stack_a) == position(node_b, *stack_b))
	{
		if (pos == 0 || position(node_a, *stack_a) == position(node_b, *stack_b))
			rr_a(stack_a, stack_b, node_a, node_b);
		else
			rrr_n(stack_a, stack_b, node_a, node_b);
	}
	else
	{
		if (pos == 1)
			rra(node_b, stack_b);
		else if (pos == 0)
			ra(node_b, stack_b);
		if (pos_t == 1)
			rrb(node_a, stack_a);
		else if (pos_t == 0)
			rb(node_a, stack_a);
	}
	if (node_a == *stack_a && node_b == *stack_b)
		push(stack_b, stack_a, PA);
}
void	push_b(t_list *node_a, t_list **stack_a, t_list *node_b, t_list **stack_b)
{
	int	pos;
	int	pos_t;
	
	if (!node_a || !*stack_a || !node_b || !*stack_b || !stack_a || !stack_b)
		return ;	
	if (node_a->cost == 0)
	{
		
		push(stack_a, stack_b, PB);
		return ;
	}
	pos = median_check(node_a, *stack_a);
	pos_t = median_check(node_b, *stack_b);
	if (pos == pos_t || position(node_a, *stack_a) == position(node_b, *stack_b))
	{
		if (pos == 0 || position(node_a, *stack_a) == position(node_b, *stack_b))
			rr_a(stack_a, stack_b, node_a, node_b);
		else
			rrr_n(stack_a, stack_b, node_a, node_b);
	}
	else
	{
		if (pos == 1)
			rra(node_a, stack_a);
		else if (pos == 0)
			ra(node_a, stack_a);
		if (pos_t == 1)
			rrb(node_b, stack_b);
		else if (pos_t == 0)
			rb(node_b, stack_b);
	}
	if (node_a == *stack_a && node_b == *stack_b)
		push(stack_a, stack_b, PB);
}
