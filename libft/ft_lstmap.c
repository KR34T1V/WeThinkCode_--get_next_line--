/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 12:31:15 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/13 13:03:47 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lstnew;

	if (lst)
	{
		lstnew = f(lst);
		lstnew->next = ft_lstmap(lst->next, f);
		return (lstnew);
	}
	return (NULL);
}
