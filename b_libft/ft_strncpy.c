/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:29:39 by amelikia          #+#    #+#             */
/*   Updated: 2018/09/11 21:21:34 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		a1;
	int		a2;

	i = 0;
	a1 = ft_strlen((char*)src);
	a2 = ft_strlen((char*)dest);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (a1 < a2)
		return (dest);
	else
	{
		dest[a1 + 1] = '\0';
		return (dest);
	}
}
