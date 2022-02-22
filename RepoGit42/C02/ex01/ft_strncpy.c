/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:07:21 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/15 17:35:21 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	count;

	count = 0;
	while ((count < (int) n) && (src[count] != '\0'))
	{
		dest[count] = src[count];
		count++;
	}
	while (count < (int) n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
