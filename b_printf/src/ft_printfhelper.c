/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhelper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:52:14 by amelikia          #+#    #+#             */
/*   Updated: 2018/09/16 14:05:02 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	ft_ncounter1(int i, va_list arg, const char *s)
{
	char	*counter;
	int		n1;

	n1 = 0;
	counter = "";
	if (s[i] == 'd' || s[i] == 'i')
	{
		counter = ft_itoa_base(va_arg(arg, int), 10);
		ft_putstr(counter);
		n1 += ft_strlen(counter);
	}
	if (s[i] == 'p')
	{
		ft_putstr("0x");
		counter = ft_itoa_base(va_arg(arg, unsigned long long), 16);
		ft_putstr(counter);
		n1 += 2 + ft_strlen(counter);
	}
	return (n1);
}

int	ft_ncounter2(int i, va_list arg, const char *s)
{
	char	*counter;
	int		n1;

	n1 = 0;
	counter = "";
	if (s[i] == 'o')
	{
		counter = ft_itoa_base(va_arg(arg, unsigned int), 8);
		ft_putstr(counter);
		n1 += ft_strlen(counter);
	}
	if (s[i] == 'u')
	{
		counter = ft_itoa_base(va_arg(arg, unsigned int), 10);
		ft_putstr(counter);
		n1 += ft_strlen(counter);
	}
	if (s[i] == 'x')
	{
		counter = ft_itoa_base(va_arg(arg, unsigned int), 16);
		ft_putstr(counter);
		n1 += ft_strlen(counter);
	}
	return (n1);
}

int	ft_ncounter3(int i, const char *s)
{
	int		n1;

	n1 = 0;
	if (s[i] == '%')
	{
		ft_putchar('%');
		n1++;
	}
	return (n1);
}

int	ft_ncounter(int i, va_list arg, const char *s)
{
	char	*counter;
	int		n1;

	n1 = 0;
	counter = "";
	if (s[i] == 's')
	{
		counter = (va_arg(arg, char*));
		ft_putstr(counter);
		n1 += ft_strlen(counter);
	}
	if (s[i] == 'c')
	{
		ft_putchar(va_arg(arg, int));
		n1++;
	}
	n1 += ft_ncounter1(i, arg, s);
	n1 += ft_ncounter2(i, arg, s);
	n1 += ft_ncounter3(i, s);
	return (n1);
}
