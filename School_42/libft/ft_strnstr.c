/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:09:41 by asantoro          #+#    #+#             */
/*   Updated: 2022/04/05 17:40:42 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t	j;
	size_t	i;

	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[j])
	{
		i = 0;
		while (haystack[j + i] == needle[i] && (j + i) < len)
		{
			if (needle[i + 1] == '\0')
				return ((char *)&haystack[j]);
			i++;
		}
		j++;
	}
	return (NULL);
}
