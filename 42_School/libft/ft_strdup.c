/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spyro <spyro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:34:46 by spyro             #+#    #+#             */
/*   Updated: 2022/03/17 11:16:13 by spyro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*str;

	size = ft_strlen((char *)s);
	str = malloc(size);
	str = (char *)s;
	return (str);
}
