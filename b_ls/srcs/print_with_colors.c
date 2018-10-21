/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_with_colors.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:42:27 by amelikia          #+#    #+#             */
/*   Updated: 2018/10/09 19:42:28 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

void	print_with_colors(t_node *entity)
{
	if ((entity->buf.st_mode & S_IFBLK) == S_IFBLK)
		printf("%s%s%s%s%s", CBLUE, BBLUE, entity->name, BBLACK, CWHITE);
	else if ((entity->buf.st_mode & S_IFLNK) == S_IFLNK)
		printf("%s%s", CPINK, entity->name);
	else if ((entity->buf.st_mode & S_IXUSR) == S_IXUSR)
		printf("%s%s", CRED, entity->name);
	else if ((entity->buf.st_mode & S_IFDIR) == S_IFDIR)
		printf("%s%s", CBLUE, entity->name);
	else if ((entity->buf.st_mode & S_IFCHR) == S_IFCHR)
		printf("%s%s%s%s%s", CBLUE, BYELLOW, entity->name, BBLACK, CWHITE);
	else
		printf("%s%s", CWHITE, entity->name);
}
