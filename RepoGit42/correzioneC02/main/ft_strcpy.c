/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:40:20 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/10 19:00:41 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>







int main (void)
{
	char src[] = "ciao";
	char dest[5];
	ft_strcpy(dest, src);
	printf("Stringa da copiare > %s\nStringa copiata > %s\n", src, dest);
}
