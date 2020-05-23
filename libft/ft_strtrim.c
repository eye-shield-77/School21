/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 16:33:37 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/23 23:08:05 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (++i <= ft_strlen(set))
		if (c == set[i - 1])
			return (1);
	return (0);
}

char		*ft_strtrim(char const *str, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*s;

	if (!str)
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
	if (!(s = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	k = 0;
	while (++k - 1 < j - i + 1)
		s[k - 1] = str[i + k - 1];
	s[k] = '\0';
	return (s);
}
