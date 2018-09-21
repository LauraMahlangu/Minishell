/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmahlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 14:51:07 by lmahlang          #+#    #+#             */
/*   Updated: 2017/06/25 14:51:15 by lmahlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;
	unsigned char	ct;

	i = 0;
	st = (unsigned char*)s;
	ct = (unsigned char)c;
	while (i < n)
	{
		if (st[i] == ct)
			return (&st[i]);
		i++;
	}
	return (NULL);
}
