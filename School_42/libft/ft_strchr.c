/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:36:48 by asantoro          #+#    #+#             */
/*   Updated: 2022/04/05 17:57:30 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	ucc;

	ucc = c;
	i = 0;
	while (str[i])
	{
		if (ucc == str[i])
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == ucc)
		return ((char *)&str[i]);
	return (NULL);
}
