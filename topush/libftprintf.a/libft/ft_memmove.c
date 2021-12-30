/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:22:40 by qxia              #+#    #+#             */
/*   Updated: 2021/12/12 14:08:02 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i ++;
		}
	}
	else
	{
		while (i < len)
		{
			*(char *)(dst + len - 1) = *(char *)(src + len - 1);
			len --;
		}
	}
	return (dst);
}
