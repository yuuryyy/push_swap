/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 01:05:33 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/23 18:16:49 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	free_stack(t_list **stack)
{
	t_list	*tmp;
	t_list	*current;

	if (!stack || !*stack)
		return ;
	current = *stack;
	tmp = current;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = NULL;
		current = tmp;
	}
}
