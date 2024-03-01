/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 22:29:10 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/02 00:38:17 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	init_stack_a(t_list *node, t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;
	t_list	*tmp_b;

	tmp = stack_a;
	tmp_b = stack_b;
	if (!tmp || !node || !tmp_b)
		return ;
	target_node_a(tmp_b, node);
	nude_cost(node, tmp, node->target_node, tmp_b);
}

void	init_stack_b(t_list *node, t_list *stack_b, t_list *stack_a)
{
	t_list	*tmp;
	t_list	*tmp_b;

	tmp = stack_a;
	tmp_b = stack_b;
	if (!tmp || !node || !tmp_b)
		return ;
	target_node_b(tmp, node);
	nude_cost(node, tmp_b, node->target_node, tmp);
}
