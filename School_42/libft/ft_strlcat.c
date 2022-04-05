/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:08:28 by asantoro          #+#    #+#             */
/*   Updated: 2022/04/05 17:01:11 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendest;
	size_t	i;

	if ((unsigned int)dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen((char *)src));
	lendest = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && lendest + 1 < dstsize)
	{
		dst[lendest] = src[i];
		i++;
		lendest++;
	}
	dst[lendest] = '\0';
	return (ft_strlen((char *)dst) + ft_strlen((char *)&src[i]));
}
