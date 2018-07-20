/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:27:35 by cterblan          #+#    #+#             */
/*   Updated: 2018/05/31 08:28:50 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char		*tdst;
	size_t		tlen;

	tdst = dst;
	tlen = -1;
	while (++tlen < len && *src)
		*tdst++ = *src++;
	while (tlen++ < len)
		*tdst++ = '\0';
	return (dst);
}
