/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:09:19 by asantoro          #+#    #+#             */
/*   Updated: 2022/06/02 15:55:08 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_check(const char *s, int i, va_list arg)
{
	if (s[i + 1] == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (s[i + 1] == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (s[i + 1] == 'p')
		return (ft_putstr("0x") + ft_put_pointer(va_arg(arg, void *), \
		"0123456789abcdef"));
	if (s[i + 1] == 'd' || s[i + 1] == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	if (s[i + 1] == 'u')
		return (ft_putnbr_u(va_arg(arg, unsigned int)));
	if (s[i + 1] == 'x')
		return (ft_put_hex(va_arg(arg, unsigned int), "0123456789abcdef"));
	if (s[i + 1] == 'X')
		return (ft_put_hex(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	if (s[i + 1] == '%')
		return (ft_putchar(s[i + 1]));
	else
		return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, s);
	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '%' && ft_strchr("cspdiuxX%", s[i + 1]))
		{
			count += ft_type_check(s, i, arg);
			i++;
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
