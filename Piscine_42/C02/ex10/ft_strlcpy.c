/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:44:49 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/16 15:04:45 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				counter1;
	unsigned int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (src[counter1] != '\0')
	{
		counter1++;
	}
	if (size != 0)
	{
		while (src[counter2] != '\0' && counter2 < (size -1))
		{
			dest[counter2] = src [counter2];
			counter2++;
		}
		dest[counter2] = '\0';
	}
	return (counter1);
}

#include <stdio.h>
int main ()
{
	char a[] = "ciao";
	char b[] = "ciass";
	int i = 3;

	printf("%u", ft_strlcpy(a, b, i));
}
