/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 18:18:26 by lgorilla          #+#    #+#             */
/*   Updated: 2020/05/24 17:56:29 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*num_fin(int i, int n, int sign, char *str)
{
	while (i-- - sign)
	{
		if (n < 0)
		{
			str[0] = '-';
			n = -n;
		}
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		num;
	int		sign;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = (n < 0) ? 1 : 0;
	num = n;
	while (num / 10)
	{
		num = num / 10;
		i++;
	}
	i += (n < 0) ? 2 : 1;
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	num_fin(i, n, sign, str);
	return (str);
}
