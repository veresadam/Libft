/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:29:57 by adveres           #+#    #+#             */
/*   Updated: 2017/12/05 12:39:22 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char *new;
	unsigned char c;

	c = 0;
	new = (unsigned char *)str;
	while (n--)
	{
		*new = c;
		if (n)
			new++;
	}
}
