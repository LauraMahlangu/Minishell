/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrd_cnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmahlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:16:13 by lmahlang          #+#    #+#             */
/*   Updated: 2017/09/29 14:22:27 by lmahlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wrd_cnt(char *s)
{
	int	i;
	int	len;
	int	w_cnt;

	i = 0;
	while (ft_isspace(s[i]))
		i++;
	len = ft_strlen(s);
	while (ft_isspace(s[len - 1]))
		len--;
	w_cnt = 1;
	while (i++ < len)
		if (ft_isspace(s[i]))
			w_cnt++;
	return (w_cnt);
}
