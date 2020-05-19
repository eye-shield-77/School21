/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 03:09:47 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/18 16:28:29 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return a pointer to the last occurrence of c in str.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	if (c == 0)
		return ((char *)str + i);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
