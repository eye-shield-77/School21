/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 02:14:09 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/18 16:26:38 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compare str1 to str2 (both are n bytes long)
** Return the difference between first two different bytes.
** Return 0 if equal.
*/

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
