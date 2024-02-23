/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_elem_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:08:35 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/22 18:10:14 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	three_sort(t_list **lst)
{
	int		a;
	int		b;
	int		c;
	t_list	*tmp;

	tmp = *lst;
	a = tmp->content;
	b = tmp->next->content;
	tmp = tmp->next;
	c = tmp->next->content;

	if (a > b && a < c)
		swap(lst, SA);
	else if (a > b && b > c)
	{
		swap(lst, SA);
		reverse_rotate(lst, RRA);
	}
	else if (a < b && b > c && c > a)
	{
		swap(lst, SA);
		rotate(lst, RA);
	}
	else if (a > c && b > a)
		reverse_rotate(lst, RRA);
	else
		rotate(lst, RA);
}
