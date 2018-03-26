/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:45:34 by adveres           #+#    #+#             */
/*   Updated: 2017/12/02 14:34:29 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *new;

	if (n == 0)
		return (str);
	new = (unsigned char *)str;
	while (n--)
	{
		*new = (unsigned char)c;
		if (n)
			new++;
	}
	return (str);
}
