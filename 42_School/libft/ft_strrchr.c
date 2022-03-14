/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:03:10 by asantoro          #+#    #+#             */
/*   Updated: 2022/03/14 16:16:17 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = ft_strlen((char *)s);
	while (s[slen] >= 0)
	{
		if (c == s[slen])
			return ((char *)&s[slen]);
		else
		slen--;
	}
	return (NULL);
}
