/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:16:59 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/03 22:53:27 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	push_node(t_list *node, t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;
	t_list	*tmp_b;
	char	*str;

	if (!node || !stack_a || !stack_b)
		return ;
	if (node->cost == 0)
		push(&tmp, &tmp_b, PB);
	else
	{
		if (median_check(node, stack_a) == median_check(node->target_node, stack_b))
		{
			str = median_check(node, stack_a);
			if (str == "above")
			{
				while (tmp != node && tmp_b != node->target_node)
					rr(&tmp, &tmp_b);
			}
			else if (str == "below")
			{
				while (tmp != node && tmp_b != node->target_node)
					rrr(&tmp, &tmp_b);
			}
		}
		
	}
}


void	sorting_algo(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	t_list	*push_node;
	int		size;

	tmp_a = stack_a;
	tmp_b = stack_b;
	if (!stack_a || !stack_b)
		return ;
	size = ft_lstsize(stack_a);
	if (size >= 5)
	{
		push(&tmp_a, &tmp_b, PB);
		push(&tmp_a, &tmp_b, PB);
	}
	else if (size == 4)
		push(&tmp_a, &tmp_b, PB);
	else 
	{
		while (size > 3)
		{
			init_stack_a(tmp_a, stack_a, stack_b);
			push_node = cheapest_node(stack_a);
			
		}
	}

}