/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:12:34 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/21 18:52:46 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	fac;

	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	fac = 1;
	while (nb > 0)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}
