/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 22:43:36 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/18 16:26:56 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy len of value c (unsigned char) to str.
** Return str.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char	*tmp;

	tmp = (char *)str;
	while (len > 0)
	{
		tmp[len - 1] = (unsigned char)c;
		len--;
	}
	return (str);
}
