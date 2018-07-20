/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 11:14:38 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/08 10:15:52 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getlen(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

static void		ft_iszero(char *new, int n)
{
	if (n == 0)
		new[0] = '0';
}

char			*ft_itoa(int n)
{
	size_t			i;
	unsigned int	tmp;
	int				sign;
	char			*new;

	sign = 1;
	i = ft_getlen(n);
	if (n < 0)
	{
		sign = -1;
		n *= -1;
		i++;
	}
	tmp = n;
	if (!(new = ft_strnew(i)))
		return (NULL);
	ft_iszero(new, n);
	while (i--)
	{
		new[i] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (sign == -1)
		new[0] = '-';
	return (new);
}
