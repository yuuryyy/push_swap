/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:27:42 by ychagri           #+#    #+#             */
/*   Updated: 2024/01/14 21:32:00 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int check_sign(char *str, int j)
{
	if (j == 0)
	{
		if (str[j+ 1] >= '0' && str[j + 1] <= '9')
			return (1);
	}
	if ((str[j - 1] == ' ' || str[j - 1] == '\t' ) && (str[j + 1] <= '9' && str[j + 1] >= '0'))
		return (1);
	return (0);
}

int	check_av(int ac,char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == ' ' || av[i][j] == '\t' || (av[i][j] >= '0' && av[i][j] <= '9')
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
	int i;
	int j;
	i = 1;
	char *str = malloc(1);
	char	**split = NULL;
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
	//printf("%s\n", str);
	split = ft_split(str, ' ');
	for (i = 0; split[i] ;i++)
		printf("%s\n", split[i]);
	return 0;
}