/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychagri <ychagri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:01:58 by ychagri           #+#    #+#             */
/*   Updated: 2024/02/26 20:17:22 by ychagri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;
	size_t	j;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	join = (char *)malloc ((ft_strlen((char *)s1)
				+ ft_strlen((char *)s2)) * sizeof(char) + 2);
	if (!join)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	join[i++] = ' ';
	while (s2[j] != '\0')
		join[i++] = s2[j++];
	free(s1);
	join[i] = '\0';
	return (join);
}
