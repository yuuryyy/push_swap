/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:15:03 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/05 17:30:28 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	rotate(t_list	**lst, int flag)
{
	t_list	*tmp;

	tmp = *lst;
	if (!tmp || !lst)
		return ;
	if (tmp->next)
	{
		*lst = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(lst, tmp);
	}
	if (flag == RA)
		ft_putstr_fd("ra\n", 1);
	else if (flag == RB)
		ft_putstr_fd("rb\n", 1);
}

void	ra(t_list *node, t_list **stack)
{
	if (!node || !stack)
		return ;
	while (node != *stack)
		rotate(stack, RA);
}

void	rb(t_list *node, t_list **stack)
{
	if (!node || !stack)
		return ;
	while (node != *stack)
		rotate(stack, RB);
}
