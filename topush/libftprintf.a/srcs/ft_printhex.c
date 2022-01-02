/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:25:04 by qxia              #+#    #+#             */
/*   Updated: 2021/12/29 12:39:46 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hex_len(unsigned int n)
{
	int	i;

	i = 0;
	if (!n)
		return (0);
	while (n)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

int	ft_printhex(unsigned int n, const char type)
{
	if (n < 10)
		ft_putchar_fd((n + '0'), 1);
	else if (n >= 16)
	{
		ft_printhex(n / 16, type);
		ft_printhex(n % 16, type);
	}
	else
	{ 
		if (type == 'x')
			ft_putchar_fd((n - 10 + 'a'), 1);
		else if (type == 'X')
			ft_putchar_fd((n - 10 + 'A'), 1);
	}
	return (ft_hex_len(n));
}
