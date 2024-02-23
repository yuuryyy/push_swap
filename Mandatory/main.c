/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:27:42 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/23 22:25:20 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/push.h"

void	f()
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{
	//atexit(f);
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (!valid_arg(ac, av) || valid_arg(ac, av) == 2)
	{
		if (!valid_arg(ac, av))
			return (ft_putstr_fd("Error\n", 0), 1);
		else
			exit(1);
	}
	if (!check_n_fill(&stack_a, av))
		return (ft_putstr_fd("Error\n", 0), 1);
	size = ft_lstsize(stack_a);
	if (!a_is_sorted(stack_a))
		return (0);
	else if (size == 2)
		two_sort(&stack_a);// free after
	else if (size == 3)
		three_sort(&stack_a);
	index_nodes(&stack_a);
	while(stack_a)
	{
		printf("%d\n", stack_a->index);
		stack_a = stack_a->next;
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
	stack_a = NULL;
	stack_b = NULL;
	return (0);
}