/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:36:49 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/28 17:36:54 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*new;

	if (s1 && s2)
	{
		new = (ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!s1 || !s2 || !new)
			return (NULL);
		ft_strcat(new, s1);
		ft_strcat(new, s2);
		return (new);
	}
	return (NULL);
}
