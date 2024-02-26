/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:32:34 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/26 18:18:29 by ychagri          ###   ########.fr       */
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
	return (1);
}
