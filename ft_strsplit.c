/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 10:57:52 by adveres           #+#    #+#             */
/*   Updated: 2017/12/11 16:23:59 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words(const char *s, char c)
{
	int		w;
	int		i;

	i = 0;
	w = 0;
	while (s[i] != 0)
	{
		while (s[i] == c && s[i] != 0)
			i++;
		if (s[i] != c && s[i] != 0)
			w++;
		while (s[i] != c && s[i] != 0)
			i++;
	}
	return (w);
}

static void	add_words(char **array, const char *s, char c)
{
	int		w;
	int		i;
	int		size;

	i = 0;
	w = -1;
	while (s[i] != 0)
	{
		size = 0;
		while (s[i] == c && s[i] != 0)
			i++;
		if (s[i] != c && s[i] != 0)
			w++;
		while (s[i] != c && s[i] != 0)
		{
			size++;
			i++;
		}
		if (size > 0)
		{
			array[w] = malloc(size + 1);
			ft_strncpy(array[w], s + (i - size), size);
			array[w][size] = '\0';
		}
	}
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		nr;

	if (!s)
		return (NULL);
	nr = words(s, c);
	array = malloc(sizeof(char*) * (nr + 1));
	if (!array)
		return (NULL);
	add_words(array, s, c);
	array[nr] = NULL;
	return (array);
}
