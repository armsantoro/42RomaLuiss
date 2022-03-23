/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:36:39 by asantoro          #+#    #+#             */
/*   Updated: 2022/03/22 11:37:09 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	char	*destinit;

	if (!s1 || !s2)
		return (NULL);
	dest = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (dest == NULL)
		return (NULL);
	destinit = (char *)dest;
	while (*s1)
	{
		*dest++ = *s1++;
	}
	while (*s2)
	{
		*dest++ = *s2++;
	}
	*dest = '\0';
	return (destinit);
}
