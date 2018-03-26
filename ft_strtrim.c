/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 17:15:59 by adveres           #+#    #+#             */
/*   Updated: 2017/12/08 17:49:13 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_laba_pierduta(const char *s, int i, int len)
{
	while (s[i])
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	len = i + 1;
	return (len);
}

char		*ft_strtrim(char const *s)
{
	char	*new;
	int		i;
	int		n;
	int		len;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = 0;
	len = ft_laba_pierduta(s, i, len);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strnew(1));
	new = (char *)malloc(sizeof(char) * (len - i + 1));
	if (new == NULL)
		return (NULL);
	n = 0;
	while ((n + i) < len)
	{
		new[n] = s[n + i];
		n++;
	}
	new[n] = '\0';
	return (new);
}
