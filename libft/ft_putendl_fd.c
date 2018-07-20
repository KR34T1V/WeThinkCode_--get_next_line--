/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:38:24 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/08 10:18:32 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	int i;

	if (str && fd)
	{
		i = 0;
		while (str[i] != '\0')
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
		ft_putchar_fd('\n', fd);
	}
}
