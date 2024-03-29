/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_elem_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:08:35 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/23 20:31:55 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	three_sort(t_list **lst)
{
	t_list	*max;

	max = max_node(*lst);
	if (max == *lst)
		rotate(lst, RA);
	else if (max == (*lst)->next)
		reverse_rotate(lst, RRA);
	if ((*lst)->content > (*lst)->next->content)
		swap(lst, SA);
}
