/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spyro <spyro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:56:48 by spyro             #+#    #+#             */
/*   Updated: 2022/03/17 22:13:09 by spyro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	is_match(char c, char const *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		k;
	char	*strim;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] && is_match(s1[j], set))
		j++;
	k = ft_strlen((char *) s1);
	while (k > j && is_match(s1[k -1], set))
		k++;
	strim = (char *) malloc(sizeof(*s1) * (k - j + 1));
	

}

#include <stdio.h>
int	main()
{
	char a[] = "mamma";
	char b[] = "a";
	printf("%s\n", strim(a, b));
}
