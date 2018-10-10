/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:41:47 by amelikia          #+#    #+#             */
/*   Updated: 2018/10/09 19:41:48 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

void		fl_init(t_flags *flags)
{
	flags->flag_a = 0;
	flags->flag_l = 0;
	flags->flag_r = 0;
	flags->flag_t = 0;
	flags->flag_sc = 0;
	flags->flag_tc = 0;
	flags->flag_gc = 0;
	flags->entity_fill = 0;
	flags->flag_illegal = 0;
}
