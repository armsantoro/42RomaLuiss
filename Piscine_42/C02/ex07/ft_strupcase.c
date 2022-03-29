/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:24:03 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/14 20:35:14 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{	
		if ((str[counter] >= 'a' && str[counter] <= 'z'))
		{
			str[counter] -= 32;
		}	
		counter++;
	}
	return (str);
}
