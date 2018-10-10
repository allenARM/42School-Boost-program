/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_set.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:41:52 by amelikia          #+#    #+#             */
/*   Updated: 2018/10/09 19:41:53 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

void	fl_set(char *str, t_flags *flags)
{
	while (*str != '\0' && flags->flag_illegal == 0)
	{
		if (*str == 'l')
			flags->flag_l = 1;
		else if (*str == 'a')
			flags->flag_a = 1;
		else if (*str == 't')
			flags->flag_t = 1;
		else if (*str == 'r')
			flags->flag_r = 1;
		else if (*str == 'S')
			flags->flag_sc = 1;
		else if (*str == 'T')
			flags->flag_tc = 1;
		else if (*str == 'G')
			flags->flag_gc = 1;
		else
		{
			flags->flag_illegal = 1;
			printf("b_ls: illegal option -- %c\n", *str);
			printf("usage: ./b_ls [GSTalrt] [file ...]\n");
		}
		str++;
	}
}
