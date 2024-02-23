/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:09:38 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/23 16:13:39 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	swap2(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	swap(t_list **lst, int flag)
{
	t_list	*second;
	t_list	*head;

	if (!lst || !*lst)
		return ;
	head = *lst;
	second = head;
	head = second->next;
	if (head)
		swap2(&second->content, &head->content);
	else
		return ;
	if (flag == SA)
		ft_putstr_fd("sa\n", 1);
	else if (flag == SB)
		ft_putstr_fd("sb\n", 1);
}
