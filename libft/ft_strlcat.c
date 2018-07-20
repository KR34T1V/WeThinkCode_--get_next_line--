/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:05:37 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/28 17:37:10 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;

	ldst = ft_strlen(s1);
	lsrc = ft_strlen(s2);
	if (dstsize <= ldst)
		return (dstsize + lsrc);
	ft_strncat(s1, s2, (dstsize - ldst - 1));
	return (lsrc + ldst);
}
