/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spyro <spyro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:23:54 by spyro             #+#    #+#             */
/*   Updated: 2022/03/30 20:07:05 by spyro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	lennum(int n, int base)
{
	size_t	count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		count++;
	while (n && ++count)
		n /= base;
	return (count);
}

char	*ft_itoa(int nb)
{
	int			len;
	long int	num;
	char		*str;

	num = nb;
	len = lennum(nb, 10);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	if (nb < 0)
		num *= -1;
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (nb < 0)
		str[0] = '-';
	return (str);
}
