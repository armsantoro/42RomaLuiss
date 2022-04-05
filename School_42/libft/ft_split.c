/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:08:38 by asantoro          #+#    #+#             */
/*   Updated: 2022/04/05 18:07:42 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	word_update;

	word_update = 0;
	while (*s)
	{
		if (*s != c)
		{
			++word_update;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (word_update);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**dst;

	if (!s)
		return (NULL);
	i = 0;
	dst = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				++s;
			dst[i++] = ft_substr(s - j, 0, j);
		}
		else
			++s;
	}
	dst[i] = 0;
	return (dst);
}
