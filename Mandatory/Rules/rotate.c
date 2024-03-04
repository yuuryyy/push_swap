/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:15:03 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/04 16:13:25 by ychagri          ###   ########.fr       */
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
//int main()
//{
//	t_list	*head;
//	t_list	*node;
//	t_list	*node1;
//	t_list	*node2;
//	t_list	*node3;
//	//t_list	*stackb = NULL;
//	head = ft_lstnew(2);
//	node = ft_lstnew(1);
//	node1 = ft_lstnew(6);
//	node2 = ft_lstnew(5);
//	node3 = ft_lstnew(8);
//	ft_lstadd_back(&head, node);
//	ft_lstadd_back(&head, node1);
//	ft_lstadd_back(&head, node2);  
//	ft_lstadd_back(&head, node3);
//	//ft_lstadd_back(&stackb, ft_lstnew(10));
//	//ft_lstadd_back(&stackb, ft_lstnew(11));
//	////ft_lstadd_back(&stackb, ft_lstnew(12));
//	//push(&head, &stackb);
//	ra_rb(&head);
//	while(head)
//	{
//		printf("%d\n",head->content);
//		head = head->next;
//	}
//	//while (stackb)
//	//{
//	//	printf("---%d\n",stackb->content);
//	//	stackb = stackb->next;
//	//}
//}