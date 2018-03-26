/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:59:31 by adveres           #+#    #+#             */
/*   Updated: 2017/12/11 12:03:35 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_increment(char const *str, int i)
{
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	return (i);
}

int			ft_atoi(char const *str)
{
	int		i;
	long	x;
	long	p;
	int		count;

	count = 0;
	p = 1;
	x = 0;
	i = ft_increment(str, 0);
	if (str[i] == '-')
	{
		p = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		count++;
		if (count == 20 && p > 0)
			return (-1);
		if (count == 20 && p < 0)
			return (0);
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x * p);
}
