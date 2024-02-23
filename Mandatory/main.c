/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:27:42 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/23 00:41:04 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/push.h"

int	main(int ac, char **av)
{
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
		return (two_sort(&stack_a), 0);// free after
	else if (size == 3)
		return (three_sort(&stack_a), 0);
	//else
	//{
		
	//}
	//push(&stack_a, &stack_b,PB );
	//push(&stack_a, &stack_b, PB);
	//ss(&stack_a, &stack_b);
	//swap(&stack_a, SA);
	//swap(&stack_b, SB);
	//rotate(&stack_a, RA);
	//rotate(&stack_b, RB);
	//rr(&stack_a, &stack_b);
	//reverse_rotate(&stack_a, RRA);
	//rrr(&stack_a, &stack_b);
	
	//while (stack_a)
	//{
	//	printf("%d\n", stack_a->content);
	//	stack_a = stack_a->next;
	//}
	//while (stack_b)
	//{
	//	printf("%d\n", stack_b->content);
	//	stack_b = stack_b->next;
	//}
	
	return (0);
}