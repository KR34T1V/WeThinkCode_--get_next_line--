/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 07:55:24 by cterblan          #+#    #+#             */
/*   Updated: 2018/05/24 13:43:38 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem, int c, size_t len)
{
	char *ptr;

	if (len == 0)
		return (mem);
	ptr = mem;
	while (len-- > 0)
	{
		*ptr++ = c;
	}
	return (mem);
}
