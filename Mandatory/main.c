/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:27:42 by ychagri           #+#    #+#             */
/*   Updated: 2024/01/31 22:21:32 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/push.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	//t_list	*stack_b;
	
	stack_a = NULL;
	if (!valid_arg(ac, av) || valid_arg(ac, av) == 2)
	{
		if (!valid_arg(ac, av))
			return(ft_putstr_fd("Error\n", 0), 0);
		else
			exit(1);
	}
	if (!check_n_fill(&stack_a, av))
		return(ft_putstr_fd("Error\n", 0), 0);
	check_n_fill(&stack_a, av);
	while (stack_a)
	{
		printf("SA");
		printf("%d\n", stack_a->content);
	}
		
}

// parse true or false pasi address linked list // ok 
// with the size of the linked list choose how to sort if under 10 hard coded instructions otherwise pass to the
	// algorithm --> // 50 100 200 or above chose by the algo
// in case u use allocation free up the whole program at the finish using a function 

