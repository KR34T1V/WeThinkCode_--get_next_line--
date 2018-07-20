/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:06:59 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/13 13:28:23 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char charc;

	charc = (unsigned char)c;
	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == charc)
			return (str);
		str++;
	}
	return (NULL);
}
