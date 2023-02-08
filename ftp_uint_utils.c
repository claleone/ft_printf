/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_uint_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:32:09 by cleone            #+#    #+#             */
/*   Updated: 2023/02/01 17:32:24 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_nbr(unsigned int nb)
{
	if (nb == 4294967295)
	{
		ft_putnbr(nb / 10);
		ft_putchar('5');
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
	if (nb < 0)
		return (ll_lenght(4294967295 - nb + 1, 10));
	return (ll_lenght(nb, 10));
}
