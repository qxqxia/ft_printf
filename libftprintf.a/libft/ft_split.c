/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:37:44 by qxia              #+#    #+#             */
/*   Updated: 2021/12/13 12:24:47 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordscount(char const *s, char c)
{
	size_t	word_count;

	word_count = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			s++;
		word_count++;
	}
	if (*(s - 1) == c)
		word_count--;
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	index;
	char	**res;

	if (!*s)
		return (0);
	index = 0;
	i = 0;
	res = (char **) malloc (sizeof(char *) * (wordscount(s, c) + 1));
	if (!res)
		return (0);
	while (i < ft_strlen(s))
	{
		while (i < ft_strlen(s) && s[i] == c)
			i++;
		j = 0;
		while (i + j < ft_strlen(s) && s[i + j] != c)
			j++;
		if (j > 0)
			res[index++] = ft_substr(s, i, j);
		i = i + j;
	}
	res[index] = 0;
	return (res);
}
