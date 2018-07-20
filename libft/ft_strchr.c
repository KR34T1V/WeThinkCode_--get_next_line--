/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 10:31:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/08 10:21:51 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char a;
	char *str;

	a = (char)c;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == a)
			return (&*str);
		str++;
	}
	if (a == '\0' && *str == '\0')
		return (&*str);
	else
		return (NULL);
}
