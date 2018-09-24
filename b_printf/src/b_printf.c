/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:25:38 by amelikia          #+#    #+#             */
/*   Updated: 2018/09/24 11:44:01 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int		b_printf(const char *restrict s, ...)
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
		if (s[i] == '%' && s[i] != '\0')
		{
			i++;
			n += ft_ncounter(i, arg, s);
		}
		if (s[i] != '\0')
			i++;
	}
	va_end(arg);
	return (n);
}
