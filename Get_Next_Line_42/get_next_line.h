/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:51:57 by evento            #+#    #+#             */
/*   Updated: 2022/07/18 20:03:29 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*ft_substr(char *s, unsigned int start, size_t len);
char	*get_next_line(int fd);
char	*ft_read_and_stash(int fd, char *stash);
char	*ft_new_stash(char *stash);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_extract_line(char *stash);
size_t	ft_strlen(char *s);

#endif
