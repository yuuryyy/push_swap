/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_elem_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:10:51 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/22 19:28:32 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	two_sort(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	if (!*lst || !lst)
		return ;
	if (tmp->content > tmp->next->content)
		swap(lst, SA);
}