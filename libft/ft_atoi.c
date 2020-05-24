/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 03:25:03 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/24 17:44:03 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char ch)
{
	if (ch == '\t' || ch == ' ' || ch == '\v')
		return (1);
	if (ch == '\n' || ch == '\r' || ch == '\f')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long	res;
	int		strlen;
	int		strstart;
	int		is_negative;

	strlen = -1;
	while (is_whitespace(str[++strlen]))
		;
	is_negative = -1;
	if (str[strlen] == '-')
		is_negative = 1;
	else if (str[strlen] != '+')
		strlen--;
	strstart = strlen;
	while (ft_isdigit(str[++strlen]))
		;
	res = 0;
	while (++strstart < strlen)
	{
		res = 10 * res - (str[strstart] - 48);
		if (res > 0)
			return ((is_negative - 1) / 2);
	}
	return (is_negative * res);
}
