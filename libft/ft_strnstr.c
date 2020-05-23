/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 03:13:23 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/19 19:01:41 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return a pointer to the first occurence of n bytes of str2 in str1.
*/

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < n && str1[i] != '\0')
	{
		j = 0;
		while (i + j < n && str1[i + j] == str2[j] && str2[j] != '\0')
			j++;
		if (str2[j] == '\0')
			return ((char *)str1 + i);
		i++;
	}
	return (NULL);
}
