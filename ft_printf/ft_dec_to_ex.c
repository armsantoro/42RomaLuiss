/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_ex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:32:38 by asantoro          #+#    #+#             */
/*   Updated: 2022/06/02 14:25:35 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size_hex(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static char	*ft_hex_to_str(unsigned int n, char *base)
{
	int		size;
	char	*hex;

	size = ft_size_hex(n);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if (!hex)
		return (NULL);
	hex[size] = '\0';
	while (size > 0)
	{
		hex[size - 1] = base[n % 16];
		n /= 16;
		size--;
	}
	return (hex);
}

int	ft_put_hex(unsigned int n, char *base)
{
	char	*str;
	int		len;

	str = ft_hex_to_str(n, base);
	len = ft_putstr(str);
	free(str);
	return (len);
}
