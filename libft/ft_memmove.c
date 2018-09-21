/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmahlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:51:44 by lmahlang          #+#    #+#             */
/*   Updated: 2017/06/24 14:51:57 by lmahlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	operation;
	size_t	pos;
	size_t	end;

	if (dst != src)
	{
		if (dst < src)
		{
			operation = 1;
			pos = 0;
			end = len;
		}
		else
		{
			operation = -1;
			pos = len - 1;
			end = -1;
		}
		while (pos != end)
		{
			((unsigned char*)dst)[pos] = ((unsigned char*)src)[pos];
			pos += operation;
		}
	}
	return (dst);
}
