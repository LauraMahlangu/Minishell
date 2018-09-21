/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmahlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 14:44:08 by lmahlang          #+#    #+#             */
/*   Updated: 2017/06/25 14:44:15 by lmahlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int j;
	int sign;
	int value;

	j = 0;
	sign = 0;
	value = 0;
	while (str[j] == ' ' || str[j] == '\n' || str[j] == '\v' ||
			str[j] == '\t' || str[j] == '\r' || str[j] == '\f')
		j++;
	i = j;
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
			value = (value * 10) + str[i] - '0';
		else if (str[i] == '+' && i == j)
			sign = 0;
		else if (str[i] == '-' && i == j)
			sign = 1;
		else
			break ;
		i++;
	}
	return (sign == 0 ? value : -value);
}
