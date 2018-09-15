/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:25:38 by amelikia          #+#    #+#             */
/*   Updated: 2018/09/15 13:52:08 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int		ft_printf(const char *s, ...)
{
	int		i;
	int		n;
	va_list	arg;

	va_start(arg, s);
	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '%' && s[i] != '\0')
		{
			ft_putchar(s[i]);
			n++;
			i++;
		}
		if (s[i] == '%')
		{
			i++;
			n += ft_ncounter(n, i, arg, s);
		}
		if (s[i] != '\0')
			i++;
	}
	va_end(arg);
	return (n);
}
