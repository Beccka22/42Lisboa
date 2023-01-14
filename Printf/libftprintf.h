/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:18:33 by rneves-s          #+#    #+#             */
/*   Updated: 2023/01/14 21:00:36 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include<stdlib.h>
# include<stdio.h>
# include<unistd.h>

int		ft_itoa(const char *nptr);
int		ft_printf_arg(const char *format, int i, va_list arg);
int		ft_putchar(char c);
int		ft_putnbr_u(unsigned int nbr);
int		ft_putnbr(int nbr);
int		ft_putstr(char *str);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *s);
int		ft_printf(const char *format, ...);
#endif
