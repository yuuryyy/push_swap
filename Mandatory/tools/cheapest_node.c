/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:11:52 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/05 17:26:48 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

t_list	*cheapest_node(t_list *stack)
{
	t_list	*tmp;
	t_list	*node;

	tmp = stack;
	if (!stack)
		return (NULL);
	node = tmp;
	while (tmp)
	{
		if (tmp->cost == 0)
		{
			node = tmp;
			return (node);
		}
		else if (tmp->cost < node->cost)
			node = tmp;
		tmp = tmp->next;
	}
	return (node);
}
