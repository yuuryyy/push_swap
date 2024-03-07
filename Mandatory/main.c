/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:27:42 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/07 20:20:25 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/push.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!valid_arg(ac, av) || valid_arg(ac, av) == 2)
	{
		if (!valid_arg(ac, av))
			return (ft_putstr_fd("Error\n", 2),
				free_stack(&stack_a), stack_a = NULL, 1);
		else
			exit(0);
	}
	if (!check_n_fill(&stack_a, av))
		return (ft_putstr_fd("Error\n", 2),
			free_stack(&stack_a), stack_a = NULL, 1);
	if (!a_is_sorted(stack_a))
		return (free_stack(&stack_a), stack_a = NULL, 0);
	else if (ft_lstsize(stack_a) == 2)
		return (two_sort(&stack_a), free_stack(&stack_a), stack_a = NULL, 0);
	else if (ft_lstsize(stack_a) == 3)
		return (three_sort(&stack_a), free_stack(&stack_a), stack_a = NULL, 0);
	sorting_algo(&stack_a, &stack_b);
	free_stack(&stack_a);
	return (0);
}
