/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:48:02 by asantoro          #+#    #+#             */
/*   Updated: 2022/03/23 18:19:09 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	counterword(char *str, char terminator)
{
	int	count;

	count = 0;
	while (*str++)
	{
		if (*str == terminator)
			count++;
	}
	return (count);
}

int	sizecounter(char *str, char terminator)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == terminator)
			break ;
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(char *string, const char delimiter)
{
	int		i;
	int		j;
	int		z;
	char	**dest;

	dest = (char **)malloc(sizeof(char *) * 12 + 1);
	i = 0;
	j = 0;
	while (i < 12)
	{
		z = sizecounter(string, delimiter);
		dest[i] = (char *)malloc(sizeof(char) * (z + 1));
		dest[i] = ft_substr(string, j, z);
		j += z + 1;
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int main ()
{
  char **ret = ft_split("gen,feb,mar,apr,mag,giu,lug,ago,set,ott,nov,dic", ',');
  int i = 0;
  while (i < 12)
  {
      printf("%s\n", ret[i]);
    i++;
  }
}
