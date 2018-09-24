/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:54:24 by amelikia          #+#    #+#             */
/*   Updated: 2018/09/22 17:20:12 by amelikia         ###   ########.fr       */
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
int		ft_ncounter1(int i, va_list arg, const char *s);
int		ft_ncounter2(int i, va_list arg, const char *s);
int		ft_ncounter3(int i, const char *s);
int		ft_ncounter(int i, va_list arg, const char *s);
int		b_printf(const char *restrict s, ...);

#endif
