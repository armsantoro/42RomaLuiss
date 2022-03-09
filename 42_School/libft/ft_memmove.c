/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:32:33 by asantoro          #+#    #+#             */
/*   Updated: 2022/03/09 18:04:53 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, void *src, unsigned int n);

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	
}

#include <stdio.h>
#include <string.h>

int	main ()
{
	char	a[] = "astrudi tommy";
	char	b[] = "ciao arma";
	int		n = 3;
	printf("%s\n", memmove(a, b, n));
	printf("%s\n", ft_memmove(a, b, n));
}
