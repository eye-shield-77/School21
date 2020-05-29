/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 18:57:18 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/29 17:15:57 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_length(int n)
{
	int num_len;

	num_len = 1;
	while (n / 10)
	{
		n /= 10;
		num_len++;
	}
	return (num_len);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		num_len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = (n < 0) ? 1 : 0;
	num_len = number_length(n) + sign;
	printf("%d\n", num_len);
	if (!(str = (char*)malloc(sizeof(char) * (num_len + 1))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[num_len] = '\0';
	while (num_len-- > sign)
	{
		str[num_len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
