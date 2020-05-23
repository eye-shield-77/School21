/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 23:17:17 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/23 21:25:41 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy len bytes from src to dst.
** Return original dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	if (!dst && !src && len)
		return (NULL);
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	i = len;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		while (len--)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dst);
}
