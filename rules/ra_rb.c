/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:15:03 by ychagri           #+#    #+#             */
/*   Updated: 2024/01/30 15:21:35 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ra_rb(t_list	**lst)
{
	t_list	*tmp;
	int		n;
	t_list	*node;

	tmp = *lst;
	if (tmp->next)
	{
		n = tmp->content;
		*lst = tmp->next;
		free(tmp);
		tmp = NULL;
		node = ft_lstnew(n);
		ft_lstadd_back(lst, node);
	}
}
int main()
{
	t_list	*head;
	t_list	*node;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	//t_list	*stackb = NULL;
	
	head = ft_lstnew(2);
	node = ft_lstnew(1);
	node1 = ft_lstnew(6);
	node2 = ft_lstnew(5);
	node3 = ft_lstnew(8);
	
	ft_lstadd_back(&head, node);
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);  
	ft_lstadd_back(&head, node3);
	//ft_lstadd_back(&stackb, ft_lstnew(10));
	//ft_lstadd_back(&stackb, ft_lstnew(11));
	////ft_lstadd_back(&stackb, ft_lstnew(12));
	
	//push(&head, &stackb);
	ra_rb(&head);
	while(head)
	{
		printf("%d\n",head->content);
		head = head->next;
	}
	//while (stackb)
	//{
	//	printf("---%d\n",stackb->content);
	//	stackb = stackb->next;
	//}
}