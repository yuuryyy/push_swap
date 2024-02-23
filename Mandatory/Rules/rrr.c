/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:54:59 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/22 17:58:59 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_a || !stack_a || !stack_b || !*stack_b)
		return ;
	reverse_rotate(stack_a, RRR);
	reverse_rotate(stack_b, RRR);
	ft_putstr_fd("rrr\n", 1);
}