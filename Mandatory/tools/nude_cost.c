/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nude_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:49:56 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/01 21:09:10 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

int	median(t_list *node, t_list *stack)
{
	t_list	*tmp;
	int		size;
	int		i;

	tmp = stack;
	if (!node || !stack)
		return (0);
	size = ft_lstsize(tmp);
	i = 0;
	while (tmp != node)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

char	*median_check(t_list *node, t_list *stack)
{
	t_list	*tmp;
	int		size;
	int		i;

	tmp = stack;
	if (!node || !stack)
		return (NULL);
	size = ft_lstsize(tmp);
	i = 0;
	while (tmp != node)
	{
		i++;
		tmp = tmp->next;
	}
	if (i < size / 2)
	{
		node->pos = i;
		return ("above");
	}
	else
	{
		node->pos = size - i;
		return ("below");
	}
	
}
int	cost(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

void	nude_cost(t_list *node, t_list *stack, t_list *target, t_list *t_stack)
{
	t_list	*tmp;
	t_list	*t_tmp;
	
	tmp = stack;
	t_tmp = t_stack;
	if (!node || !stack || !target || !t_stack)
		return ;
	if (median_check(node, stack) == median_check (target, t_stack))
		node->cost = cost(node->pos, target->pos);
	else if (median_check(node, stack) != median_check (target, t_stack)
		&& median(node, stack) == median(target, t_stack))
		node->cost = median(node, stack);
	
	else
		node->cost = node->pos + target->pos;
}
