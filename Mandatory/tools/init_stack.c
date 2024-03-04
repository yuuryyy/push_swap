/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 22:29:10 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/04 17:12:27 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	init_stack_a(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;
	t_list	*tmp_b;

	tmp = stack_a;
	tmp_b = stack_b;
	if (!tmp || !tmp_b)
		return ;
	while (tmp)
	{
		target_node_a(tmp_b, tmp);
		nude_cost(tmp, stack_a, tmp->target_node, tmp_b);
		tmp = tmp->next;
	}
}

void	init_stack_b(t_list *stack_b, t_list *stack_a)
{
	t_list	*tmp;
	t_list	*tmp_b;

	tmp = stack_a;
	tmp_b = stack_b;
	if (!tmp || !tmp_b)
		return ;
	while (tmp_b)
	{
		target_node_b(tmp,tmp_b);
		nude_cost(tmp_b, stack_b, tmp_b->target_node, tmp);
		tmp_b = tmp_b->next;
	}
}
