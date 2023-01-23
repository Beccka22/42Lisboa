/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:18:33 by rneves-s          #+#    #+#             */
/*   Updated: 2023/01/23 22:02:02 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa(int n);
int		ft_printf_arg(const char *format, int i, va_list arg);
int		ft_putchar(char c);
int		ft_putnbr_u(unsigned int nbr);
int		ft_putnbr(int nbr);
int		ft_putstr(char *str);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *s);
int		ft_printf(const char *format, ...);
int		ft_put_hex(unsigned int nbr, char *base);
char	*ft_utoa(unsigned int n);
char	*ft_hex_to_str(unsigned long n, char *base);
int		ft_count_hex(unsigned long n);
int		ft_put_pointer(void *nbr, char *base);
#endif
