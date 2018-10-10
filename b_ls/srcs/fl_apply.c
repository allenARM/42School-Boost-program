/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_apply.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:41:41 by amelikia          #+#    #+#             */
/*   Updated: 2018/10/09 19:41:43 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

t_node	*fl_apply(t_node *node_list, t_flags *flags)
{
	int		rev;

	rev = 0;
	if (flags->flag_r == 1)
		rev = 1;
	node_list = node_sort_by_name(node_list, rev);
	if (flags->flag_t == 1 && flags->flag_sc == 0)
		node_list = node_sort_by_time(node_list, rev);
	if (flags->flag_sc == 1)
		node_list = node_sort_by_size(node_list, rev);
	return (node_list);
}
