/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 10:58:47 by adveres           #+#    #+#             */
/*   Updated: 2017/12/08 17:39:07 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	my_itoa(char **c, int n)
{
	while (n)
	{
		**c = n % 10 + '0';
		n /= 10;
		(*c)--;
	}
}

static int	length(int n)
{
	int		s;

	s = 0;
	if (n < 0)
		s = 1;
	while (n)
	{
		s++;
		n /= 10;
	}
	return (s);
}

static char	*new(size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*c;
	int		s;
	int		ok;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ok = 0;
	s = length(n);
	if (!(c = new(s)))
		return (NULL);
	if (n < 0)
	{
		ok = 1;
		*c = '-';
		n *= -1;
	}
	c += s - 1;
	my_itoa(&c, n);
	if (ok)
		return (c);
	return (c + 1);
}
