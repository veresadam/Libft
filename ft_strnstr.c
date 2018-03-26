/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:25:40 by adveres           #+#    #+#             */
/*   Updated: 2017/12/05 15:02:12 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str1, char const *str2, size_t n)
{
	char	*s;
	size_t	i;
	size_t	j;

	s = (char *)str1;
	if (ft_strlen(str2) == 0)
		return (s);
	i = 0;
	while (str1[i] && i < n)
	{
		j = 0;
		while ((str1[i + j] == str2[j]) && ((i + j) < n))
		{
			if (str2[1 + j] == '\0')
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}
