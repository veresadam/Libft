/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 18:57:23 by adveres           #+#    #+#             */
/*   Updated: 2017/12/05 17:25:54 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (slen + size);
	if (slen < size - dlen)
	{
		ft_memcpy(dest + dlen, src, slen);
		dest += dlen + slen;
	}
	else
	{
		ft_memcpy(dest + dlen, src, size - dlen - 1);
		dest += size - 1;
	}
	dest[i] = '\0';
	return (dlen + slen);
}
