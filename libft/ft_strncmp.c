/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 03:18:36 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/18 16:28:14 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compare size bytes between str1 and str2.
** Return the difference between first two different bytes.
** Return 0 if equal.
*/

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while (str1[i] != '\0' && str1[i] == str2[i] && i < size - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
