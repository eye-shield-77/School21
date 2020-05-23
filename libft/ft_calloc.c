/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 16:07:44 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/23 21:14:38 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocate a zero-initialized memory block of (num*size) bytes.
*/

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*res;
	size_t	len;

	len = num * size;
	if (len && len / size != num)
		return (NULL);
	if (!(res = malloc(len)))
		return (NULL);
	ft_bzero(res, len);
	return (res);
}
