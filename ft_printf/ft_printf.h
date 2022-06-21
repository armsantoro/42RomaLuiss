/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:34:57 by asantoro          #+#    #+#             */
/*   Updated: 2022/06/02 15:53:12 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int			ft_size_hex(unsigned long n);
int			ft_put_hex(unsigned int n, char *base);
int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_putnbr(int n);
char		*ft_strchr(const char	*s, int c);
char		*ft_itoa(int n);
char		*ft_utoa(unsigned int n);
int			ft_putnbr_u(unsigned int n);
int			ft_n_len(int n);
int			ft_type_check(const char *s, int i, va_list arg);
int			ft_printf(const char *s, ...);
int			ft_put_pointer(void *nbr, char *base);

#endif
