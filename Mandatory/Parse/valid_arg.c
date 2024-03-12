/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:32:34 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/12 21:31:04 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/push.h"

int	check_sign(char *str, int j)
{
	if (j == 0)
	{
		if (ft_isdigit(str[j + 1]))
			return (1);
	}
	if ((str[j - 1] == ' ' || str[j - 1] == '\t' )
		&& ft_isdigit(str[j + 1]))
		return (1);
	return (0);
}

int	check_emptystr(char **av)
{
	int	i;
	int	k;
	int	count;

	i = 1;
	while (av[i])
	{
		k = 0;
		count = 0;
		while (av[i][k])
		{
			if (av[i][k] != ' ')
				count++;
			k++;
		}
		if (count == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_av(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == ' ' || av[i][j] == '\t' || (ft_isdigit(av[i][j]))
				|| ((av[i][j] == '-' || av[i][j] == '+')
				&& check_sign(av[i], j)))
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	valid_arg(int ac, char **av)
{
	if (ac <= 1)
		return (2);
	else if (!check_av(av))
		return (0);
	if (!check_emptystr(av))
		return (0);
	return (1);
}
