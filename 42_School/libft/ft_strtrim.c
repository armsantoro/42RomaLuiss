/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:09:28 by asantoro          #+#    #+#             */
/*   Updated: 2022/03/18 18:48:55 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	is_match(char set, char const *str)
{
	while (*str)
	{
		if (*str == set)
			return (1);
		str++;
	}
	return (0);
}

char	trim_char(char *set, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (set)
		if (str[i] == set)
			str[i] = 127;
		i++;
	}
	return ((char)*str);
}

char	*ft_strtrim(const char *s1, char *set)
{
	int		i;
	int		size_s_trim;
	char	*strim;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && is_match(s1[i], set))
	{
		trim_char((char)s1[i], (char *)set);
		i++;
	}
	size_s_trim = ft_strlen((char *)s1);
	strim = malloc(size_s_trim + 1);
	*strim = *s1;
	return (strim);
}

int	main()
{
	char a[] = "armando";
	char b[] = "ar";
	//printf("%s\n", ft_strtrim(a, b));
	printf("%s\n", strtrim(a, b));

}
