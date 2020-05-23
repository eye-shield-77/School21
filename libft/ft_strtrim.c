/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 16:33:37 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/23 22:31:36 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (++i <= ft_strlen(set))
		if (c == set[i-1])
			return (1);
	return (0);
}

char		*ft_strtrim(char const *str, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*s;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char*)str);
	i = 0;
	while (in_set(str[i], set))
		i++;
	if (str[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(str);
	while (in_set(str[--j], set))
		;
	s = (char *)malloc(sizeof(char) * (j - i + 2));
	if (s == NULL)
		return (NULL);
	k = 0;
	while (k < j - i + 1)
	{
		s[k] = str[i + k];
		k++;
	}
	s[k] = '\0';
	return (s);
}
