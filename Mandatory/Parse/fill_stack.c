/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:42:47 by ychagri           #+#    #+#             */
/*   Updated: 2024/01/31 22:08:36 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

int	checkdouble(t_list *lst)
{
	t_list	*tmp;
	t_list	*i;

	if (!lst || !lst->next)
		return (1);
	tmp = lst;
	i = lst;
	while (lst)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (lst->content == tmp->content)
				return (0);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (1);
}
int	limit(char **str)
{
	int	i;

	if (!str || !*str)
		return (1);
	i = 0;
	while (str[i])
	{
		if (ft_atoi(str[i]) > INT_MAX || ft_atoi(str[i]) < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}
int	check_n_fill(t_list **stack_a, char **av)
{
	int		i;
	t_list	*stack;
	char	*str = malloc(1);
	char	**split = NULL;

	i = 1;
	str[0] = '\0';
	stack = *stack_a;
	while (av[i])
	{
		str = ft_strjoin(str, av[i]);
		i++;
	}
	i = 0;
	split = ft_split(str, ' ');
	free(str);
	if (!split)
		return (0);
	if (!limit(split))
	{
		return (0);
	}
	stack = ft_lstnew(ft_atoi(split[i++]));
	while (split[i])
	{
		ft_lstadd_back(&stack,ft_lstnew(ft_atoi(split[i])));
		i++;
	}
	if (!checkdouble(stack))
		return (0);
	return (1);
}
