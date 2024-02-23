/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:27:42 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/23 19:00:22 by ychagri          ###   ########.fr       */
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
	reverse_rotate(&stack_a, RRA);
	printf("%d\n", max_node(stack_a)->content);
	printf("%d\n", min_node(stack_a)->content);
	free_stack(&stack_a);
	free_stack(&stack_b);
	stack_a = NULL;
	stack_b = NULL;
	return (0);
}