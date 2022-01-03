/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:08:53 by qxia              #+#    #+#             */
/*   Updated: 2021/12/13 10:08:44 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	dst = ft_strdup(s);
	if (!dst)
		return (NULL);
	while (dst[i])
	{
		dst[i] = f(i, dst[i]);
		i++;
	}
	return (dst);
}
