/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 11:14:01 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/13 07:58:14 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *h, const char *ndle)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	lneedle;
	char			*hay;

	lneedle = ft_strlen(ndle) - 1;
	hay = (char *)h;
	a = 0;
	if (!*ndle)
		return (hay);
	while (hay[a])
	{
		i = 0;
		if (hay[a] == ndle[0])
			while (hay[a + i] == ndle[i])
			{
				if (i == lneedle)
					return (&hay[a]);
				i++;
			}
		a++;
	}
	return (NULL);
}
