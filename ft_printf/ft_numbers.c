/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:39:51 by asantoro          #+#    #+#             */
/*   Updated: 2022/06/02 15:55:45 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_n_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	long	m;
	char	*s;

	i = ft_n_len(n);
	m = n;
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	if (m < 0)
	{
		s[0] = '-';
		m *= -1;
	}
	if (m == 0)
		s[0] = '0';
	s[i--] = '\0';
	while (m)
	{
		s[i--] = (m % 10) + '0';
		m /= 10;
	}
	return (s);
}

static int	ft_u_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	int		i;
	long	m;
	char	*s;

	i = ft_u_len(n);
	m = n;
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	if (m == 0)
		s[0] = '0';
	s[i--] = '\0';
	while (m)
	{
		s[i--] = (m % 10) + '0';
		m /= 10;
	}
	return (s);
}
