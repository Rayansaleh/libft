/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 03:07:31 by rsaleh            #+#    #+#             */
/*   Updated: 2018/11/12 04:58:31 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *s;

	if (lst)
	{
		if (!(s = (t_list*)malloc(lst->content_size)))
			return (NULL);
		s = f(lst);
		s->next = ft_lstmap(lst->next, f);
		return (s);
	}
	return (NULL);
}
