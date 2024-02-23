/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:46:56 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/22 20:27:15 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	push(t_list **from, t_list **to, int flag)
{
	t_list	*tmp;
	t_list	*node;
	int		n;

	if (!from || !*from || !to)
		return ;
	tmp = *from;
	n = tmp->content;
	if (tmp->next)
		*from = tmp->next;
	else
		*from = NULL;
	free(tmp);
	node = ft_lstnew(n);
	ft_lstadd_front(to, node);
	if (flag == PA)
		ft_putstr_fd("pa\n", 1);
	else if (flag == PB)
		ft_putstr_fd("pb\n", 1);
	
}
//int main()
//{
//	t_list	*head;
//	t_list	*node;
//	t_list	*node1;
//	t_list	*node2;
//	t_list	*node3;
//	t_list	*stackb = NULL;
//	head = ft_lstnew(2);
//	node = ft_lstnew(1);
//	node1 = ft_lstnew(6);
//	node2 = ft_lstnew(5);
//	node3 = ft_lstnew(8);
//	ft_lstadd_back(&head, node);
//	ft_lstadd_back(&head, node1);
//	ft_lstadd_back(&head, node2);  
//	ft_lstadd_back(&head, node3);
//	ft_lstadd_back(&stackb, ft_lstnew(10));
//	ft_lstadd_back(&stackb, ft_lstnew(11));
//	//ft_lstadd_back(&stackb, ft_lstnew(12));	
//	push(&head, &stackb);
//	while(head)
//	{
//		printf("%d\n",head->content);
//		head = head->next;
//	}
//	while (stackb)
//	{
//		printf("---%d\n",stackb->content);
//		stackb = stackb->next;
//	}
//}