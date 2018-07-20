/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:12:15 by cterblan          #+#    #+#             */
/*   Updated: 2018/05/29 16:29:32 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*str2;
	unsigned const char	*str1;

	str2 = (unsigned char *)dst;
	str1 = (unsigned const char *)src;
	while (n--)
	{
		*str2 = *str1;
		if (*str1 == (unsigned char)c)
			return (++str2);
		str1++;
		str2++;
	}
	return (NULL);
}
