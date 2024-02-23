/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:07:48 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/22 17:11:38 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a || !*stack_a || !stack_b || !*stack_b)
		return ;
	rotate(stack_a, RR);
	rotate(stack_b, RR);
	ft_putstr_fd("rr\n", 1);
}