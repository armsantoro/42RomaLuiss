/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:51:44 by asantoro          #+#    #+#             */
/*   Updated: 2022/03/15 18:10:59 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*u1;
	unsigned char	*u2;

	if (!n)
		return (0);
	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*u1 != *u2)
			return (*u1 - *u2);
		else
		u1++;
		u2++;
		n--;
	}
	return (0);
}
