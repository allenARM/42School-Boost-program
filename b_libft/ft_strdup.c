/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:50:07 by amelikia          #+#    #+#             */
/*   Updated: 2018/09/11 14:54:21 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	while (src[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(char) * (i + 1));
	while (k < i)
	{
		str[k] = src[k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
