/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 10:41:41 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/12 11:25:40 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	controllo;

	controllo = 1;
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			controllo = 0;
		}
		str++;
	}
	return (controllo);
}
