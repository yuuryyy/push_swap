/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:31:49 by ychagri           #+#    #+#             */
/*   Updated: 2024/01/30 15:44:46 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	rra_rrb(t_list **lst)
{
	t_list	*tmp;
	t_list	*node;
	t_list	*previous = NULL;
	int		n;

	tmp = *lst;
	if (!lst || !*lst || tmp->next == NULL)
		return ;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			n = tmp->content;
			free(tmp);
			node = ft_lstnew(n);
			ft_lstadd_front(lst, node);
			previous->next = NULL;
			break;
		}
		previous = tmp;
		tmp = tmp->next;
	}
}
int main()
{
	t_list	*head;
	t_list	*node;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*stackb = NULL;
	
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
	rra_rrb(&stackb);
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