/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:03:03 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/03 19:23:48 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_is_negative (int n)
{

	char positivo;
	char negativo;
	positivo = 'P';
	negativo = 'N';

	if (n=> 0)
	{
		write(1, &positivo, 1);
	}
		else
		{
			write(1, &negativo, 1);
		}
}
