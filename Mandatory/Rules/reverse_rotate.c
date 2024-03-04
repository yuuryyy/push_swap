/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:31:49 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/04 16:19:32 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	reverse_rotate(t_list **lst, int flag)
{
	t_list	*tmp;
	t_list	*previous;

	previous = NULL;
	tmp = *lst;
	if (!lst || !*lst || tmp->next == NULL)
		return ;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			ft_lstadd_front(lst, tmp);
			if (previous != NULL)
				previous->next = NULL;
			break ;
		}
		previous = tmp;
		tmp = tmp->next;
	}
	if (flag == RRA)
		ft_putstr_fd("rra\n", 1);
	else if (flag == RRB)
		ft_putstr_fd("rrb\n", 1);
}

void	rra(t_list *node, t_list **stack)
{
	if (!node || !stack || !*stack)
		return ;
	while (node != *stack)
		reverse_rotate(stack, RRA);
}
void	rrb(t_list *node, t_list **stack)
{
	if (!node || !*stack || !stack)
		return ;
	while (node != *stack)
		reverse_rotate(stack, RRB);
}
