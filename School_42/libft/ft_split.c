/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spyro <spyro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:48:02 by asantoro          #+#    #+#             */
/*   Updated: 2022/03/29 03:19:47 by spyro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	cwd(char *str, char terminator)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str != terminator)
		{
			++count;
			while (*str && *str != terminator)
				++str;
		}
		else
			++str;
	}
	return (count);
}

char	**ft_split(char *string, const char delimiter)
{
	int		i;
	int		z;
	char	**dest;

	if (!string)
		return (NULL);
	dest = (char **)malloc(sizeof(char *) * (cwd(string, delimiter) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (*string)
	{
		if (*string != delimiter)
		{
			z = 0;
			while (*string && *string != delimiter && ++z)
				++string;
			dest[i++] = ft_substr(string - z, 0, z);
		}
		else
			++string;
	}
	dest[i] = 0;
	return (dest);
}
