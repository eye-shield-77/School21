/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 22:54:06 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/18 16:25:48 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy n zeroes to str.
** Return nothing.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
