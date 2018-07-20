/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 11:49:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/30 14:46:20 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_arrays.h"
#include <stdio.h>

int		get_next_line(int const fd, char **line)
{
	static char	*stat[1];
	char		*temp;
	int			rtn;

	if (fd < 0 || line == NULL)
		return (-1);
	if (stat[fd] == NULL)
		if (!(stat[fd] = ft_strnew(0)))
			return (-1);
	if ((rtn = ft_get_next_line(fd, line, stat)) < 2)
		return (rtn);
	*line = ft_strsub(stat[fd], 0, ft_strclen(stat[fd], '\n'));
	temp = stat[fd];
	stat[fd] = ft_strsub(stat[fd], (ft_strclen(stat[fd], '\n') + 1),
			ft_strlen(stat[fd]));
	free(temp);
	return (1);
}

int		ft_get_next_line(int const fd, char **line, char **stat)
{
	char		buff[BUFF_SIZE + 1];
	char		*temp;
	int			bytes_read;

	while (!(ft_iscfound(stat[fd], '\n')))
	{
		temp = stat[fd];
		if (((bytes_read = read(fd, buff, BUFF_SIZE)) == 0) &&
				(ft_strlen(stat[fd]) == 0))
			return (0);
		else if (bytes_read == 0 && (ft_strlen(stat[fd]) != 0))
		{
			*line = ft_strsub(stat[fd], 0 , ft_strlen(stat[fd]));
			stat[fd][0] = '\0';
			return (1);
		}
		buff[bytes_read] = '\0';
		if (bytes_read == -1)
			return (-1);
		if (!(stat[fd] = ft_strjoin(stat[fd], buff)))
			return (-1);
		free(temp);
	}
	return (2);
}
