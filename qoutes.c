/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qoutes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmahlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 12:34:32 by lmahlang          #+#    #+#             */
/*   Updated: 2017/09/29 12:34:44 by lmahlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_quote(char *s[1000], int j)
{
	int		i;
	int		z;

	z = 0;
	while (z < j)
	{
		i = 0;
		while (s[z][i])
			(s[z][i] != 39) ? ft_putchar(s[z][i++]) : i++;
		ft_putchar('\n');
		z++;
	}
}

void	ft_dquote(char *s[1000], int j)
{
	int		i;
	int		z;

	z = 0;
	while (z < j)
	{
		i = 0;
		while (s[z][i])
			(s[z][i] != 34) ? ft_putchar(s[z][i++]) : i++;
		ft_putchar('\n');
		z++;
	}
}
