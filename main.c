/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:27:42 by ychagri           #+#    #+#             */
/*   Updated: 2024/01/27 13:16:32 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int check_sign(char *str, int j)
{
	if (j == 0)
	{
		if (ft_isdigit(str[j + 1]))
			return (1);
	}
	if ((str[j - 1] == ' ' || str[j - 1] == '\t' ) && (str[j + 1] <= '9' && str[j + 1] >= '0'))
		return (1);
	return (0);
}

int checkdouble(t_list *lst)
{
	t_list *tmp;
	t_list *i;

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

int	check_av(int ac,char **av)
{
	int	i;
	int	j;
	(void)ac;
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == ' ' || av[i][j] == '\t' || (ft_isdigit(av[i][j]))
				||((av[i][j] == '-' || av[i][j] == '+') && check_sign(av[i],j) ))
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		i;
	i = 1;
	t_list	*head = NULL;
	t_list	*new = NULL;
	char *str = malloc(1);
	char	**split = NULL;
	
	if (ac <= 1)
		exit(1);
	else
	{
		if (!check_av(ac, av))
		{
			printf("error\n");
			exit(1);
		}
		while (i < ac)
		{
			str = ft_strjoin(str, av[i]);
			i++;
		}
		i = 0;
		split = ft_split(str, ' ');
		if (!split)
			return (6);
		head = ft_lstnew(ft_atoi(split[i++]));
		while (split[i])
		{
			new = ft_lstnew(ft_atoi(split[i]));
			ft_lstadd_back(&head, new);
			i++;
		}
		if (!checkdouble(head))
		{
			return (printf("error dubs"), 0);
		}
		while (head)
		{
			printf("%d\n", head->content);
			head = head->next;
		}
	}
	return 0;
}