/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 16:33:37 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/19 14:36:34 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *set)
{
	unsigned int	i;

	i = -1;
	while (++i < ft_strlen(set))
		if (c == set[i])
			return (1);
	return (0);
}

char		*ft_strtrim(char const *str, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*s;

	i = -1;
	while (in_set(str[++i], set))
		;
	if (str[i] == '\0')
		return (ft_strcpy(ft_calloc(2, sizeof(char)), ""));
	j = ft_strlen(str);
	while (in_set(str[--j], set))
		;
	s = (char *)malloc(sizeof(char) * (j - i + 2));
	if (s == NULL)
		return (NULL);
	k = -1;
	while (++k < j - i + 1)
		s[k] = str[i + k];
	s[k] = '\0';
	return (s);
}
