/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:06:11 by asantoro          #+#    #+#             */
/*   Updated: 2022/04/05 17:48:26 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == '\0' && src == '\0')
		return (0);
	while (n-- > 0)
	{
		*(unsigned char *)&dst[i] = *(unsigned char *)&src[i];
		i++;
	}
	return (dst);
}
