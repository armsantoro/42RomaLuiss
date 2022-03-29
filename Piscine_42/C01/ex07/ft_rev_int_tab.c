/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:15:45 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/10 13:40:20 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	while (count < (size / 2))
	{
		temp = tab[count];
		tab[count] = tab[size -1 - count];
		tab[size -1 - count] = temp;
		count++;
	}	
}
