/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmahlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 14:53:19 by lmahlang          #+#    #+#             */
/*   Updated: 2017/06/25 14:53:28 by lmahlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*bt;

	i = 0;
	bt = (char*)b;
	while (i < len)
	{
		bt[i] = (unsigned char)c;
		i++;
	}
	return (bt);
}
