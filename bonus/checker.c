/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:33:56 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/07 18:24:23 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/Inc/push.h"

int	exec_instructions(t_list **stack_a, t_list **stack_b, char *str)
{
	if (ft_strncmp(str, "pa\n", 3) == 0)
		push(stack_b, stack_a, 5);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		push(stack_a, stack_b, 5);
	else if (ft_strncmp(str, "sa\n", 3) == 0)
		swap(stack_a, 5);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		swap(stack_b, 5);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ss(stack_a, stack_b, 5);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		rotate(stack_b, 5);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		rotate(stack_a, 5);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		rr(stack_a, stack_b, 5);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		reverse_rotate(stack_a, 5);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		reverse_rotate(stack_b, 5);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		rrr(stack_a,stack_b, 5);
	else
		return (0);
	return (1);
}

int	get_instructions(t_list **stack_a, t_list **stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!exec_instructions(stack_a, stack_b, line))
			return (0);
		line = get_next_line(0);
	}
	return (1);
}

int	checker(char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	
	stack_b = NULL;
	stack_a = NULL;
	if (!check_n_fill(&stack_a, av))
		return (0);
	if (!get_instructions(&stack_a, &stack_b))
		return (0);
	//while (stack_a)
	//{
	//	printf("----%d\n", stack_a->content);
	//	stack_a = stack_a->next;
	//}
	if (!a_is_sorted(stack_a) && !stack_b)
		ft_putstr_fd("OK\n", 1);
	else if (a_is_sorted(stack_a) || stack_b)
		ft_putstr_fd("KO\n", 1);
	return (1);
}
