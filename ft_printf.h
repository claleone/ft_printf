/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:27:10 by cleone            #+#    #+#             */
/*   Updated: 2023/02/01 17:27:14 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define TYPES "cspdiuxX"

void	ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_strlen(const char *str);
int		lenght(int nb, int base);
int		ll_lenght(long long nb, int base);

int		other_flags(char type);
int		flag_print(char type, va_list curr_param);
int		ft_printf(const char *a, ...);

int		print_char(va_list param);

int		hex_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_print_hex(unsigned int num, const char format);

int		ft_putnbr(int nb);

int		ptr_len(unsigned long long n);
int		ptr_print(unsigned long long num);
void	ptr_conv(unsigned long long num);

int		ft_put_unsigned_nbr(unsigned int nb);

#endif
