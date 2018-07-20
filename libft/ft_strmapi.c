/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 08:23:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/08 10:26:16 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (s && f)
	{
		new = ft_strnew(ft_strlen(s));
		i = 0;
		if (!s || !f || !new)
			return (NULL);
		while (s[i])
		{
			new[i] = (*f)(i, s[i]);
			i++;
		}
		return (new);
	}
	return (NULL);
}
