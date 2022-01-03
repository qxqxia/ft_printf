/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:00:19 by qxia              #+#    #+#             */
/*   Updated: 2021/12/12 17:53:20 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_num(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i = i + 1;
	}
	while (n)
	{
		n = n / 10;
		i = i + 1;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	long	num;

	num = n;
	len = count_num(n);
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!len)
		return (ft_strdup("0"));
	res = (char *) malloc (sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		n = n * (-1);
		res[0] = '-';
	}
	res[len--] = 0;
	while (n)
	{
		res[len--] = n % 10 + '0';
		n = n / 10;
	}
	return (res);
}
