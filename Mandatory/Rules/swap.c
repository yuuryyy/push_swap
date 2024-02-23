/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:09:38 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/22 20:22:37 by ychagri          ###   ########.fr       */
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

void	swap(t_list **lst , int flag)
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
		ft_putstr_fd("sa\n",1);
	else if (flag == SB)
		ft_putstr_fd("sb\n",1);
	
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