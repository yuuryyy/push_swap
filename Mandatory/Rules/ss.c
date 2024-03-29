/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:08:13 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/07 18:21:29 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

void	ss(t_list **stack_a, t_list **stack_b, int flag)
{
	if (!stack_a || !stack_b)
		return ;
	swap(stack_a, SS);
	swap(stack_b, SS);
	if (flag == SS)
		ft_putstr_fd("ss\n", 1);
}
