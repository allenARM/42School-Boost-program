/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_dirs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:41:22 by amelikia          #+#    #+#             */
/*   Updated: 2018/10/09 19:41:23 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

static t_node			*reading_dir(t_node *path, t_flags *flags, \
		DIR *dir, t_node *dir_list)
{
	struct stat			buf;
	char				*linkname;
	char				*str;
	char				*str1;
	struct dirent		*sd;

	while ((sd = readdir(dir)))
	{
		linkname = NULL;
		lstat(path->name, &buf);
		if ((buf.st_mode & S_IFLNK) != S_IFLNK || ((buf.st_mode & S_IFLNK) ==\
					S_IFLNK && flags->flag_l == 0))
		{
			str1 = ft_strcat(path->name, "/");
			str = ft_strcat(str1, sd->d_name);
			lstat(str, &buf);
			if (flags->flag_a == 1 || sd->d_name[0] != '.')
				dir_list = node_add(dir_list, sd->d_name, buf);
			free(str);
			free(str1);
		}
	}
	return (dir_list);
}

void					count_dirs(int cnt_dirs, t_node *path,
	t_flags *flags, DIR *dir)
{
	t_node *dir_list;

	dir_list = NULL;
	if (cnt_dirs > 0)
		printf("\n") && printf("%s:\n", path->name);
	dir_list = reading_dir(path, flags, dir, dir_list);
	display_entity(path, dir_list, flags);
	ft_list_clean(&dir_list);
}

void					display_dirs(t_node *path, t_flags *flags)
{
	int					cnt_dirs;
	DIR					*dir;

	flags->entity_fill = 0;
	cnt_dirs = node_size(path);
	while (path)
	{
		dir = opendir(path->name);
		if (ft_strcmp(mode_print(path->buf.st_mode), "---------") == 0 &&\
					!stat(path->name, &path->buf))
			printf("\nb_ls: %s: Permission denied\n", path->name);
		if (dir && ((path->buf.st_mode & S_IFDIR) == S_IFDIR || \
					((path->buf.st_mode & S_IFLNK) == S_IFLNK && flags->\
					flag_l == 0)))
			count_dirs(cnt_dirs, path, flags, dir);
		if (dir)
			closedir(dir);
		path = path->next;
	}
}
