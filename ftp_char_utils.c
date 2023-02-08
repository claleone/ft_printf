/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_char_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:28:45 by cleone            #+#    #+#             */
/*   Updated: 2023/02/01 17:29:06 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(va_list param)
{
	char	buffer;

	buffer = va_arg(param, int);
	ft_putchar(buffer);
	return (1);
}
