/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spyro <spyro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:35:57 by asantoro          #+#    #+#             */
/*   Updated: 2022/03/27 19:00:00 by spyro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	sizes;
	int		i;
	size_t	j;

	i = start;
	j = 0;
	if (!s)
		return (0);
	sizes = ft_strlen((char *)s);
	if (start > sizes)
		dest = (char *)malloc(ft_strlen((char *)s));
	else
		dest = (char *)malloc(len + 1);
	if (!s || !dest)
		return (0);
	while (i < ft_strlen((char *)s) && j < len)
		dest[j++] = s[i++];
	dest[j] = '\0';
	return (dest);
}
