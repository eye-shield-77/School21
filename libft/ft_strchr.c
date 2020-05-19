/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 02:32:52 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/18 16:27:28 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return a pointer to the first occurrence of c in str.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	if (!c && str[i] == '\0')
		return ((char *)str + i);
	return (NULL);
}
