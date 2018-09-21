/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmahlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 15:14:38 by lmahlang          #+#    #+#             */
/*   Updated: 2017/06/25 16:29:28 by lmahlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_parts_nr(char const *s, char c)
{
	int i;
	int cnt;
	int	part;

	i = 0;
	cnt = 0;
	part = 0;
	while (s[i])
	{
		if (s[i] == c && part == 1)
			part = 0;
		if (s[i] != c && part == 0)
		{
			part = 1;
			cnt++;
		}
		i++;
	}
	return (cnt);
}

static int		ft_part_len(char const *s, char c, int i)
{
	int len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**map;
	int		i;
	int		j;
	int		parts;

	if (!s || !c)
		return (NULL);
	parts = ft_parts_nr(s, c);
	if (!(map = (char**)malloc(sizeof(*map) * (parts + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (parts > 0)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		map[j] = ft_strsub(s, i, ft_part_len(s, c, i));
		j++;
		i = i + ft_part_len(s, c, i);
		parts--;
	}
	map[j] = NULL;
	return (map);
}
