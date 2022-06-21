/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:02:23 by asantoro          #+#    #+#             */
/*   Updated: 2022/06/02 16:02:23 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_hex(unsigned long n)
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

static char	*ft_hex_to_strp(unsigned long n, char *base)
{
	int		size;
	char	*hex;

	size = ft_count_hex(n);
	hex = (char *) malloc(sizeof(char) * size + 1);
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

int	ft_put_pointer(void *nbr, char *base)
{
	int				len;
	char			*str;
	unsigned long	n;

	n = (unsigned long)nbr;
	str = ft_hex_to_strp(n, base);
	len = ft_putstr(str);
	free(str);
	return (len);
}
