/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:09:44 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/15 18:34:43 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	stampa(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s2[i] == s1[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	swap(char *xp, char *yp)
{
	char	*temp;

	temp = xp;
	xp = yp;
	yp = temp;
}

void	ft_sort_char_tab(char **tab, int size)
{
	int	i;
	int	j;
	int	min_idx;

	i = 1;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[min_idx]) < 0)
				min_idx = j;
			j++;
		}
		swap(tab[min_idx], tab[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_char_tab(argv, argc);
	while (i < argc)
	{
		stampa(argv[i]);
		putchar('\n');
		i++;
	}
	return (0);
}
