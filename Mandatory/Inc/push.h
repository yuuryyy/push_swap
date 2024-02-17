/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:48:28 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/02 18:07:23 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# include "../../lib/libft.h"
# include <limits.h>
# include <stdbool.h>

# define TRUE 1
# define FALSE 0

int	valid_arg(int ac, char **av);
int	check_n_fill(t_list **stack_a, char **av);

#endif