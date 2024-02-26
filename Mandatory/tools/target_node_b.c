/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_node_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 05:37:55 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/26 20:23:34 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	target_node_b(t_list *stack_a, t_list *b_node)
{
	t_list	*target;
	t_list	*tmp;

	tmp = stack_a;
	if (!tmp || !b_node)
		return ;
	target = min_node(tmp);
	if (max_node(tmp)->content < b_node->content)
		b_node->target_node = target;
	else
	{
		target = max_node(tmp);
		while (tmp)
		{
			if (b_node->content < tmp->content
				&& tmp->content < target->content)
				target = tmp;
			tmp = tmp->next;
		}
		b_node->target_node = target;
	}
}
