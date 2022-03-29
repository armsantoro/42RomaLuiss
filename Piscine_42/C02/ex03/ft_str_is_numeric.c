/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:02:31 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/14 20:15:58 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	controllo;

	controllo = 1;
	while (*str)
	{
		if (!((*str >= '0' && *str <= '9')))
		{
			controllo = 0;
		}
		str++;
	}
	return (controllo);
}
