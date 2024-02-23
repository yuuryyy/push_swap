/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_is_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:29:04 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/23 18:15:53 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

int	a_is_sorted(t_list *stack_a)
{
	int	pre;

	if (!stack_a)
		return (0);
	pre = stack_a->content;
	while (stack_a->next)
	{
		if (pre > stack_a->next->content)
			return (1);
		stack_a = stack_a->next;
		pre = stack_a->content;
	}
	return (0);
}
