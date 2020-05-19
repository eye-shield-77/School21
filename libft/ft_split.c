/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 16:40:51 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/19 14:26:51 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *str, char c)
{
	unsigned int	i;
	int				words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			words++;
		while (str[i] && (str[i] != c))
			i++;
	}
	return (words);
}

static char	*ft_strndup(const char *str, size_t n)
{
	char			*s;

	s = (char *)malloc(sizeof(char) * (n + 1));
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, str, n + 1);
	return (s);
}

char		**ft_split(char const *str, char c)
{
	int				i;
	int				j;
	int				k;
	char			**res;

	i = 0;
	k = 0;
	res = (char **)malloc(sizeof(char *) * (ft_countwords(str, c)) + 1);
	if (res == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		j = i;
		while (str[i] && str[i] != c)
			i++;
		if (i > j)
		{
			res[k] = ft_strndup(str + j, i - j);
			k++;
		}
	}
	res[k] = NULL;
	return (res);
}
