/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmahlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 15:05:44 by lmahlang          #+#    #+#             */
/*   Updated: 2017/06/25 15:05:52 by lmahlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dstt;
	const char	*srct;
	size_t		n;
	size_t		len;

	dstt = dst;
	srct = (char*)src;
	n = size;
	while (n-- != 0 && *dstt != '\0')
		dstt++;
	len = dstt - dst;
	if ((n = size - len) == 0)
		return (len + ft_strlen(srct));
	while (*srct != '\0')
	{
		if (n != 1)
		{
			*dstt++ = *srct;
			n--;
		}
		srct++;
	}
	*dstt = '\0';
	return (len + (srct - src));
}
