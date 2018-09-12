/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:19:46 by amelikia          #+#    #+#             */
/*   Updated: 2018/09/11 21:08:37 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int		ft_isdigit(int c);
void	*ft_memset(void *destination, int c, size_t n);
char	*ft_strchr(const char *str, int ch);
int		ft_strcmp(char *str1, char *str2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *src);
size_t	ft_strlen(char *str);
char	*ft_strncpy(char *dest, const char *src, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
