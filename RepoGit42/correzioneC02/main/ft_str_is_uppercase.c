/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:03:14 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/12 11:19:40 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int controllo;

	controllo = 1;
	while (*str)
	{
		if (!(*str >= 'A') && (*str <= 'Z'))
				{
				controllo = 0;
				}
		str++;
	}
	return (controllo);
}

int main (void)
{
	char a[] = "asdf1";
	char b[] = "ASDF";

	printf("%d\n", ft_str_is_uppercase("asdf1"));
	printf("%d\n", ft_str_is_uppercase("ASDF"));
		return (0);
}
