/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:32:33 by asantoro          #+#    #+#             */
/*   Updated: 2022/03/16 11:14:07 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*psrc;
	unsigned char		*pdst;

	psrc = (unsigned char *)src;
	pdst = (unsigned char *) dst;
	if (pdst < psrc)
	{
		i = 0;
		while (i < n)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	else if (pdst > psrc)
	{
		i = n;
		while (i > 0)
		{
			pdst[i - 1] = psrc[i - 1];
			i--;
		}
	}
	return (dst);
}
