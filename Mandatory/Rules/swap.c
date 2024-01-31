/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:09:38 by ychagri           #+#    #+#             */
/*   Updated: 2024/01/31 22:19:17 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	swap_a(t_list **lst)
{
	t_list	*previous;
	t_list	*tmp;

	if (!lst || !*lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		previous = tmp;
		tmp = tmp->next;
		if (tmp)
		{
			swap(&previous->content, &tmp->content);
			return ;
		}
		else
			return ;
	}
}

//int main()
//{
//	t_list	*head;
//	t_list	*node;
//	t_list	*node1;
//	t_list	*node2;
//	t_list	*node3;
//	head = ft_lstnew(2);
//	node = ft_lstnew(1);
//	node1 = ft_lstnew(6);
//	node2 = ft_lstnew(5);
//	node3 = ft_lstnew(8);
//	ft_lstadd_back(&head, node);
//	ft_lstadd_back(&head, node1);
//	ft_lstadd_back(&head, node2);
//	ft_lstadd_back(&head, node3);
//	swap_a(&head);
//	while(head)
//	{
//		printf("%d\n",head->content);
//		head = head->next;
//	}
//}