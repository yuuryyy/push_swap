/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:42:47 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/12 21:33:54 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

int	checkdouble(t_list *lst)
{
	t_list	*tmp;

	if (!lst || !lst->next)
		return (1);
	tmp = lst;
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

int	limit2(char *str)
{
	int	i;
	int	k;

	if (!str)
		return (0);
	i = 0;
	while (str[i] == ' ')
		i++;
	k = i;
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+' )
		i++;
	if (i - k > 11)
		return (0);
	return (1);
}

int	limit(char **str)
{
	int	i;

	if (!str || !*str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (!limit2(str[i]))
			return (0);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (ft_atoi(str[i]) > INT_MAX || ft_atoi(str[i]) < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

void	join(char **av, char **str)
{
	int		i;

	if (!av || !str || !*str || !*av)
		return ;
	i = 1;
	while (av[i])
	{
		*str = ft_strjoin(*str, av[i]);
		i++;
	}
}

int	check_n_fill(t_list **stack_a, char **av)
{
	int		i;
	char	*str;
	char	**split;

	str = malloc(1);
	if (!str)
		return (0);
	split = NULL;
	str[0] = '\0';
	join(av, &str);
	i = 0;
	split = ft_split(str, ' ');
	free(str);
	if (!split || !limit(split))
		return (free_array(split), free(split), 0);
	while (split[i])
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(split[i++])));
	free_array(split);
	free(split);
	if (!checkdouble(*stack_a))
		return (0);
	return (1);
}
