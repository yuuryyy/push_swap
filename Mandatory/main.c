/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:27:42 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/29 22:46:29 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/push.h"

//void	f()
//{
//	system("leaks push_swap");
//}

int	main(int ac, char **av)
{
	//atexit(f);
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (!valid_arg(ac, av) || valid_arg(ac, av) == 2 )
	{
		if (!valid_arg(ac, av))
			return (ft_putstr_fd("Error\n", 0),free_stack(&stack_a), 1);
		else
			exit(0);
	}
	if (!check_n_fill(&stack_a, av))
		return (ft_putstr_fd("Error\n", 0),free_stack(&stack_a) ,1);
	size = ft_lstsize(stack_a);
	if (!a_is_sorted(stack_a))
		return (free_stack(&stack_a), 0);
	else if (size == 2)
		return (two_sort(&stack_a), free_stack(&stack_a), 0);
	else if (size == 3)
		return (three_sort(&stack_a),free_stack(&stack_a), 0);
	index_nodes(&stack_a);
	push(&stack_a,&stack_b, PB);
	push(&stack_a,&stack_b, PB);
	push(&stack_a,&stack_b, PB);
	t_list *tmp = stack_a;
	while(tmp)
	{
		target_node_a(stack_b, tmp);
		nude_cost(tmp, stack_a, tmp->target_node, stack_b);
		printf("%d", tmp->content);
		printf("%d", tmp->pos);
		printf("----%d\n", tmp->cost);
		tmp = tmp->next;
	}
	//while(tmp)
	//{
	//	target_node_b(stack_a, tmp);
	//	printf("%d", tmp->content);
	//	printf("----%d\n", tmp->target_node->content);
	//	tmp = tmp->next;
	//}
	free_stack(&stack_a);
	//free_stack(&tmp);
	//free_stack(&stack_b);
	//return (0);
}