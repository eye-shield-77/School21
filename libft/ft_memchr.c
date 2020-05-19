/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 02:07:39 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/18 16:26:33 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Find first occurence of c in str.
** Return a pointer to the found byte
** or NULL if it doens't exist within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s;
	size_t	i;

	i = 0;
	s = (char *)str;
	while (i < n)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
