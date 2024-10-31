/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzeraig <wzeraig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:41:50 by wzeraig           #+#    #+#             */
/*   Updated: 2024/05/09 16:33:40 by wzeraig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	static char	left[BUFFER_SIZE + 1];
	char		*line;

	line = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
		return (NULL);
	if (left[0] != '\0')
		line = ft_strduper(left);
	line = read_file(fd, buf, left, line);
	if (line == NULL)
		return (NULL);
	if (ft_strlen(left) == 0)
		return (NULL);
	if (line == NULL)
		return (NULL);
	strcut(left);
	if (left == NULL)
		return (line);
	return (line);
}

char	*read_file(int fd, char *buf, char *left, char *line)
{
	int	bytes_read;

	bytes_read = 1;
	while (!ft_strchr(left, '\n') && bytes_read)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
			return (NULL);
		buf[bytes_read] = '\0';
		if (bytes_read == 0)
			break ;
		left = ft_strcpy(left, buf);
		if (line != NULL)
			line = joinfreenew(line, left);
		else
			line = ft_strduper(left);
		if (line == NULL)
			return (NULL);
	}
	if (!line)
		return (NULL);
	if (ft_strlen(line) == 0)
		return (NULL);
	return (line);
}
