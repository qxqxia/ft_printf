/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsignednbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:23:21 by qxia              #+#    #+#             */
/*   Updated: 2021/12/29 12:44:39 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_n_len(unsigned int n)
{
	int	i;

	i = 0;
	while(n)
	{
		n = n / 10;
		i = i + 1;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char	*res;
	size_t	len;

	len = ft_n_len(n);
	if (!len)
	return (NULL);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
	return (NULL);
	res[len--] = 0;
	while(n)
	{
		res[len--] = n % 10 + '0';
		n = n / 10;
	}
	return (res);
}

int	ft_printunsignednbr(unsigned int n)
{
	char			*num;
	int	i;	

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		num = ft_uitoa(n);
		i = ft_printstr(num);
		free (num);

	}
	return (i);
}
