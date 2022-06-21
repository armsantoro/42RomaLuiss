/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tools.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:58:41 by asantoro          #+#    #+#             */
/*   Updated: 2022/06/02 15:52:51 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

char	*ft_strchr(const char	*s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i] != '\0')
	{
		ft_putchar(*(s + i));
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	char	*s;
	int		len;

	s = ft_itoa(n);
	len = ft_putstr(s);
	free(s);
	return (len);
}

int	ft_putnbr_u(unsigned int n)
{
	char	*s;
	int		len;

	s = ft_utoa(n);
	len = ft_putstr(s);
	free(s);
	return (len);
}
