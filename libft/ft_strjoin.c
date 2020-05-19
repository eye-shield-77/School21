/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 16:31:29 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/18 16:27:49 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	s = (char *)malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (s == NULL)
		return (NULL);
	while (str1[i] != '\0')
	{
		s[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
	{
		s[i + j] = str2[j];
		j++;
	}
	s[i + j] = '\0';
	return (s);
}
