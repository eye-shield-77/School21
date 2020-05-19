/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 16:13:59 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/19 13:53:57 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	strlen;
	char			*s;

	strlen = ft_strlen(str);
	if (start >= strlen)
		return (ft_strcpy(ft_calloc(2, sizeof(char)), ""));
	i = 0;
	s = (char *)malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	while (i < len && start + i < strlen)
	{
		s[i] = str[start + i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
