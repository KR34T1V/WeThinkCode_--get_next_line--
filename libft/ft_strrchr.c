/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 10:58:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/04 11:12:39 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char a;
	char *str;
	char *tmp;

	a = (char)c;
	str = (char *)s;
	tmp = NULL;
	while (*str != '\0')
	{
		if (*str == a)
			tmp = &*str;
		str++;
	}
	if (a == '\0' && *str == '\0')
		tmp = &*str;
	return (tmp);
}
