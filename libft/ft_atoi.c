/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 03:25:03 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/18 19:22:23 by btaxider         ###   ########.fr       */
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
	int result;
	int	strlen;
	int strstart;
	int is_negative;

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
	result = 0;
	while (++strstart < strlen)
		result = 10 * result - (str[strstart] - 48);
	return (is_negative * result);
}
