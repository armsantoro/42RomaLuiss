/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:48:33 by evento            #+#    #+#             */
/*   Updated: 2022/07/19 19:04:41 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//leggi e alloca memoria per il buff fino a quando non trovi il \n
char	*ft_read_and_stash(int fd, char *stash)
{
	int		byte_read;
	char	*buffer;

	buffer = malloc ((sizeof(char) * BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	byte_read = 1;
	while (byte_read != 0 && ft_strchr(stash, '\n') == 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free (buffer);
			return (NULL);
		}
		buffer[byte_read] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free (buffer);
	return (stash);
}

char	*ft_new_stash(char *stash)
{
	int		i;
	int		len;
	char	*buff;

	i = 0;
	while (stash[i] != '\n' && stash[i])
		i++;
	if (!stash[i])
	{
		free (stash);
		return (NULL);
	}
	buff = (char *) malloc(sizeof(char) * (ft_strlen(stash) - i + 1));
	if (!buff)
		return (NULL);
	i++;
	len = 0;
	while (stash[i])
		buff[len++] = stash[i++];
	buff[len] = '\0';
	free(stash);
	return (buff);
}

char	*ft_extract_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] != '\n' && stash[i])
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	stash[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	stash = ft_read_and_stash(fd, stash);
	if (!stash)
		return (NULL);
	line = ft_extract_line(stash);
	stash = ft_new_stash(stash);
	return (line);
}
/*#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd;

	fd = open("test", O_RDONLY, 0644);
	if (fd == -1)
		exit(127);
	printf("%s$", get_next_line(fd));
	printf("%s$", get_next_line(fd));	printf("%s$", get_next_line(fd));	printf("%s$", get_next_line(fd));
}*/
