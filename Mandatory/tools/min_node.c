/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:58:43 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/26 20:18:19 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

t_list	*min_node(t_list *stack)
{
	t_list	*min;

	if (!stack)
		return (NULL);
	min = stack;
	while (stack)
	{
		if (min->content > stack->content)
			min = stack;
		stack = stack->next;
	}
	return (min);
}
