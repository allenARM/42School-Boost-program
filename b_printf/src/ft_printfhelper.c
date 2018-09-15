/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhelper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:52:14 by amelikia          #+#    #+#             */
/*   Updated: 2018/09/15 13:59:47 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	ft_ncounter1(int n, int i, va_list arg, const char *s)
{
	char	*counter;

	counter = "";
	if (s[i] == 'd' || s[i] == 'i')
	{
		counter = ft_itoa_base(va_arg(arg, int), 10);
		ft_putstr(counter);
		n += ft_strlen(counter);
	}
	if (s[i] == 'p')
	{
		ft_putstr("0x");
		counter = ft_itoa_base(va_arg(arg, unsigned long long), 16);
		ft_putstr(counter);
		n += ft_strlen(counter);
	}
	return (n);
}

int	ft_ncounter2(int n, int i, va_list arg, const char *s)
{
	char	*counter;

	counter = "";
	if (s[i] == 'o')
	{
		counter = ft_itoa_base(va_arg(arg, unsigned int), 8);
		ft_putstr(counter);
		n += ft_strlen(counter);
	}
	if (s[i] == 'u')
	{
		counter = ft_itoa_base(va_arg(arg, unsigned int), 10);
		ft_putstr(counter);
		n += ft_strlen(counter);
	}
	if (s[i] == 'x')
	{
		counter = ft_itoa_base(va_arg(arg, unsigned int), 16);
		ft_putstr(counter);
		n += ft_strlen(counter);
	}
	return (n);
}

int	ft_ncounter(int n, int i, va_list arg, const char *s)
{
	char	*counter;

	counter = "";
	if (s[i] == 's')
	{
		counter = (va_arg(arg, char*));
		ft_putstr(counter);
		n += ft_strlen(counter);
	}
	if (s[i] == 'c')
	{
		ft_putchar(va_arg(arg, int));
		n++;
	}
	n += ft_ncounter1(n, i, arg, s);
	n += ft_ncounter2(n, i, arg, s);
	return (n);
}
