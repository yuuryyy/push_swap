/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:16:59 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/02 00:38:32 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	sorting_algo(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	int		size;

	tmp_a = stack_a;
	tmp_b = stack_b;
	if (!stack_a)
		return ;
	size = ft_lstsize(stack_a);
	if (size >= 5)
	{
		push(&tmp_a, &tmp_b, PB);
		push(&tmp_a, &tmp_b, PB);
	}
	else if (size == 4)
		push(&tmp_a, &tmp_b, PB);
	while (size > 3)
	{
		init_stack(tmp_a, stack_a, stack_a);
		
	}
	

	
}