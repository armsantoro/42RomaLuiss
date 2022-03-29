/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:00:43 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/04 11:25:53 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print3num(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	while (n1 <= '7')
	{		
		n2 = n1 + 1;
		while (n2 <= '8')
		{
				n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_print3num(n1, n2, n3);
						n3++;
			}
					n2++;
		}
			n1++;
	}
}

int	main(void)
{
	ft_print_comb();
}
