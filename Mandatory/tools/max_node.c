/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:52:18 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/23 18:58:09 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

t_list	*max_node(t_list *stack)
{
	t_list	*max;

	if (!stack)
		return (NULL);
	max = stack;
	while (stack)
	{
		if (max->content < stack->content)
			max = stack;
		stack = stack->next;
	}
	return (max);
}
