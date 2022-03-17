/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spyro <spyro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:23:04 by spyro             #+#    #+#             */
/*   Updated: 2022/03/17 16:35:09 by spyro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	sizes;
	int		i;

	sizes = ft_strlen((char *)s);
	if (start >= sizes)
		return (ft_strdup(""));
	dest = malloc(len + 1);
	i = 0;
	while (i < (int)len && s[start + i] != '\0')
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[start + i] = '\0';
	return (dest);
}
