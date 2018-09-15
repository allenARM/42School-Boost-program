/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:54:24 by amelikia          #+#    #+#             */
/*   Updated: 2018/09/15 14:39:22 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
size_t	ft_abs(long long nb);
size_t	ft_strlen(char *str);
char	*itoa_filler(char *tab, long long value, int base, int flag);
char	*ft_itoa_base(long long value, int base);
int		ft_ncounter1(int n, int i, va_list arg, const char *s);
int		ft_ncounter2(int n, int i, va_list arg, const char *s);
int		ft_ncounter(int n, int i, va_list arg, const char *s);
int		ft_printf(const char *s, ...);

#endif
