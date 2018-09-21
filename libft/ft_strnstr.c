/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmahlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 15:09:53 by lmahlang          #+#    #+#             */
/*   Updated: 2017/06/25 15:09:59 by lmahlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char*)s1);
	while (s1[i] != '\0' && i != n)
	{
		if (s1[i] == s2[j])
		{
			while (s2[j] != 0)
			{
				if (s1[i + j] != s2[j] || i + j == n)
					break ;
				j++;
			}
			if (s2[j] == 0)
				return ((char*)&s1[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
