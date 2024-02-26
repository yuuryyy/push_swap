/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_node_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 04:34:45 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/25 18:43:18 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	target_node_a(t_list *stack_b, t_list *a_node)
{
	t_list	*target;
	t_list  *tmp = stack_b;
	
	if (!tmp || !a_node)
		return ;
	if (min_node(tmp)->content > a_node->content)
		a_node->target_node = max_node(tmp);
	else
	{
		target = min_node(tmp);
		while (tmp)
		{
			if ( a_node->content > tmp->content 
				&& tmp->content > target->content)
					target = tmp;
			tmp = tmp->next;
		}
		a_node->target_node = target;
	}
}