/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 10:41:41 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/12 10:58:29 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int main (void)
{
	char a[] = "asdf";
	char b[] = "asD1";
	ft_str_is_lowercase(a);
	ft_str_is_lowercase(b);
	printf("%d\n", ft_str_is_lowercase("asdf"));
	printf("%d\n", ft_str_is_lowercase("asD1"));
	return (0);
}
