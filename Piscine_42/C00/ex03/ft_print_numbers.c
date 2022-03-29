/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:25:06 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/03 19:31:26 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
	void ft_print_numbers (void)
{
	char number;
	number = '0';
	while(number <= 9)
	{
		write(1, &number, 1);
		number++;
	}
}
