/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:03:14 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/14 20:29:24 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	controllo;

	controllo = 1;
	while (*str)
	{
		if (!((*str >= 'A') && (*str <= 'Z')))
		{
			controllo = 0;
		}
		str++;
	}
	return (controllo);
}
