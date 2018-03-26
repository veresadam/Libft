/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:55:48 by adveres           #+#    #+#             */
/*   Updated: 2017/12/04 19:02:40 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*stri;

	i = 0;
	while (str[i])
		i++;
	stri = (char*)malloc(sizeof(char) * (i + 1));
	if (stri == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		stri[i] = str[i];
		i++;
	}
	stri[i] = '\0';
	return (stri);
}
