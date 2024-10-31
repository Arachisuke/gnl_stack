/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:00:55 by wzeraig           #+#    #+#             */
/*   Updated: 2024/05/09 16:25:40 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include "../libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strduper(const char *s);
char	*get_next_line(int fd);
char	*ft_strcpy(char *dest, const char *src);
char	*strcut(char *s);
char	*joinfreenew(char *s1, char *s2);
char	*read_file(int fd, char *buf, char *left, char *line);

#endif