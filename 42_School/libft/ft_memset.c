/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:23:37 by asantoro          #+#    #+#             */
/*   Updated: 2022/03/10 14:53:48 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, unsigned int n)
{
	unsigned char	*p_str;
	unsigned char	*p_c;
	int				count;

	p_str = str;
	p_c = c;
	count = 0;
	while (count < (int)n)
	{
		p_str[count] = p_c;
		count++;
	}
	return (p_str);
}
