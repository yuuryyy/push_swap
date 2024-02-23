/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:46:56 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/23 16:09:56 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	push(t_list **from, t_list **to, int flag)
{
	t_list	*tmp;

	if (!from || !*from || !to)
		return ;
	tmp = *from;
	if (tmp->next)
		*from = tmp->next;
	else
		*from = NULL;
	tmp->next = NULL;
	ft_lstadd_front(to, tmp);
	if (flag == PA)
		ft_putstr_fd("pa\n", 1);
	else if (flag == PB)
		ft_putstr_fd("pb\n", 1);
}
