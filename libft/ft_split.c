/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 16:40:51 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/23 22:57:32 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nwords(char const *str, char c)
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

static char	*strndupl(const char *str, size_t n)
{
	char			*s;

	s = (char *)malloc(sizeof(char) * (n + 1));
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, str, n + 1);
	return (s);
}

static void	*free_res(char **res)
{
	int				i;

	i = -1;
	while (res[++i])
		free(res[i]);
	free(res);
	return (NULL);
}

char		**ft_split(char const *str, char c)
{
	int				i;
	int				j;
	int				k;
	char			**res;

	i = 0;
	k = 0;
	if (!str || !(res = (char **)malloc(sizeof(char *) * (nwords(str, c)) + 1)))
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
			res[k] = strndupl(str + j, i - j);
			if (res[k++] == NULL)
				return (free_res(res));
		}
	}
	res[k] = NULL;
	return (res);
}
