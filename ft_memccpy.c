/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:21:12 by adveres           #+#    #+#             */
/*   Updated: 2017/12/04 12:50:23 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*src1;
	unsigned char		*dst1;
	unsigned char		c1;
	size_t				i;

	src1 = (const unsigned char *)src;
	dst1 = (unsigned char *)dst;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == c1)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
