/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:30:07 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/15 17:29:31 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	chek_symbol(char *str, int count)
{
	if ((count == 0) && (str[count] >= 'a') && (str[count] <= 'z'))
	{
		str[count] -= 32;
	}
	else if ((str[count] == ' ') && ((str[count +1] >= 'a')
			&& (str[count + 1] <= 'z')))
	{	
			str[count + 1] -= 32;
	}	
	else if (((str[count] >= '!') && (str[count] <= '/'))
		|| ((str[count] >= ':') && (str[count] <= '@'))
		|| ((str[count] >= '[') && (str[count] <= 96))
		|| ((str[count] >= '{') && (str[count] <= '~'))
		|| (str[count] == '\t'))
	{
		if ((str[count + 1] >= 'a') && (str[count + 1] <= 'z'))
		{
			str[count + 1] -= 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	count2;

	count2 = 0;
	while (str[count2] != '\0')
	{
		if ((str[count2] >= 'A') && (str[count2] <= 'Z'))
		str[count2] += 32;
		count2++;
	}
	count = 0;
	while (str[count] != '\0')
	{
		chek_symbol(str, count);
			count++;
	}	
	return (str);
}
