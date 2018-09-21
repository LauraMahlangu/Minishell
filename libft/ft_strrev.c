/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmahlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 15:10:51 by lmahlang          #+#    #+#             */
/*   Updated: 2017/06/25 15:10:58 by lmahlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *s, int size)
{
	int		i;
	char	*srev;

	i = 0;
	if (!(srev = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	size--;
	while (size >= 0)
	{
		srev[i] = s[size];
		i++;
		size--;
	}
	srev[i] = '\0';
	return (srev);
}
