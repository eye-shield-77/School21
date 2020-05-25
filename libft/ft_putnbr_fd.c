/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaxider <eyeshield77@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 18:15:43 by btaxider          #+#    #+#             */
/*   Updated: 2020/05/25 23:29:55 by btaxider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	ten_powered;
	int	no_zeroes_anymore;

	ten_powered = 1000000000;
	no_zeroes_anymore = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	else if (n < 0)
		ft_putchar_fd('-', fd);
	else
		n = -n;
	while (ten_powered != 0)
	{
		if (!no_zeroes_anymore && n / ten_powered != 0)
			no_zeroes_anymore = 1;
		if (no_zeroes_anymore)
			ft_putchar_fd((n / ten_powered) * (-1) + '0', fd);
		n %= ten_powered;
		if (ten_powered == 1)
			ten_powered = 0;
		ten_powered /= 10;
	}
}
