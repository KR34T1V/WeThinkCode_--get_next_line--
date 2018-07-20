/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:30:10 by cterblan          #+#    #+#             */
/*   Updated: 2018/07/05 13:45:27 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_arrays.h"
#include "get_next_line_linklist.h"
#include <fcntl.h>
#include <stdlib.io>

int		main(int ac, char **av)
{
	char	*line;
	int		fd;
	int		nextline;

	fd = open(av[1], O_RDONLY);
	if (ac != 2)
		printf("Being Popo Insert 1 Argement Only!");
	else
	{
		while ((nextline = get_next_line(fd, &line)) == 1)
		{
			printf("Next-Line = %i:\t%s\n", nextline, line);
			free(line);
		}
		printf("Next-Line = %i:", nextline);
	}
}
