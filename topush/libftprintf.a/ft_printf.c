/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 13:21:07 by qxia              #+#    #+#             */
/*   Updated: 2021/12/30 15:42:31 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c);

int	ft_parser(va_list args, char type)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (type == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (type == 'p')
		len += ft_printptr(va_arg(args, unsigned long long));
	else if (type == 'd' || type == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (type == 'u')
		len += ft_printunsignednbr(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		len += ft_printhex(va_arg(args, unsigned int), type);
	else if (type == '%')
		len += ft_printpourcen();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	if (!str)
		return (0);
	while (str)
	{
		if (str[i] == '%')
		{
			len += ft_parser(args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
