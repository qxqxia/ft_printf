/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:13:57 by qxia              #+#    #+#             */
/*   Updated: 2021/12/29 12:40:43 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_ptr_len(uintptr_t n)
{
	int	i;

	i = 0;
	if (!n)
		return (-1);
	while (n)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

void	ft_putptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else if (n <= 9)
		ft_putchar_fd((n + '0'), 1);
	else
		ft_putchar_fd((n - 10 + 'a'), 1);
}

int	ft_printptr(unsigned long long ptr)
{
	int	i;

	i = write(1, "0x", 2);
	if (ptr == 0)
		i += write(1, "0", 1);
	else
	{
		ft_putptr(ptr);
		i += ft_ptr_len(ptr);
	}
	return (i);
}
