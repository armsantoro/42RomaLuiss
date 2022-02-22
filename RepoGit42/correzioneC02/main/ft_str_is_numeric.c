/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:02:31 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/11 20:23:16 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while(*str)
	{
		if(!((*str >= '1' && *str <= '9')))
		{
			return(0);
		}
		str++;
	}
	return(1);
}

int main(void)
{
	ft_str_is_numeric("123f13");
	ft_str_is_numeric("124812659");
	printf("%d\n", ft_str_is_numeric("123f13"));
	printf("%d\n", ft_str_is_numeric("124812659"));
	return (0);
}

