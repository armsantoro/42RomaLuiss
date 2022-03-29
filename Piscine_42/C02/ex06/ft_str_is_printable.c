/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:35:11 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/14 17:37:06 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	controllo;

	controllo = 1;
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
		{
			controllo = 0;
		}
	str++;
	}
	return (controllo);
}
