/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tf_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:22:56 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/03 19:49:55 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1)
}
	void ft_print_reverse_alphabet(void)
{
	char alphabet;
	alphabet = 'z';
	while (alphabet >= 'a')
	{
		write(1, &c, 1);
		alphabet--;
	}
}
