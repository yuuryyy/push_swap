/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:20:57 by ychagri           #+#    #+#             */
/*   Updated: 2024/03/15 23:48:16 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/Inc/push.h"

int	main(int ac, char **av)
{
	if (!valid_arg(ac, av) || valid_arg(ac, av) == 2)
	{
		if (!valid_arg(ac, av))
			return (ft_putstr_fd("Error\n", 2), 1);
		else
			exit(0);
	}
	if (!checker(av))
		return (ft_putstr_fd("Error\n", 2), 1);
	return (0);
}
