/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:03:22 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/23 23:05:30 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	index_nodes(t_list **stack)
{
	t_list	*lst;
	t_list	*tmp;
	int		nbr;
	int		position;

	if (!*stack || !stack)
		return ;
	lst = *stack;
	while (lst)
	{
		position = 0;
		tmp = *stack;
		nbr = lst->content;
		while (tmp)
		{
			if (nbr > tmp->content)
				position++;
			tmp = tmp->next;
		}
		lst->index = position;
		lst = lst->next;
	}
}