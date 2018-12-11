/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:09:50 by rsaleh            #+#    #+#             */
/*   Updated: 2018/11/11 20:30:16 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*j;
	char	*k;

	if (!*little)
		return ((char*)big);
	while (len-- && *big)
	{
		if (*big == *little)
		{
			i = len;
			j = (char*)big + 1;
			k = (char*)little + 1;
			while (i-- && *j && *k && *j == *k)
			{
				j++;
				k++;
			}
			if (!*k)
				return ((char*)big);
		}
		big++;
	}
	return (NULL);
}
