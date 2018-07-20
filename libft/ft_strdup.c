/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:25:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/05/30 10:58:01 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *strd;

	strd = ft_strnew(ft_strlen(s1));
	if (strd == NULL)
		return (NULL);
	ft_strcpy(strd, s1);
	return (strd);
}
