/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 01:05:33 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/04 22:15:45 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	free_stack(t_list *stack)
{
	t_list	*tmp;

	if (!stack)
		return ;
	tmp = stack;
	while (tmp)
	{
		free(tmp);
		tmp = tmp->next;
	}
}
