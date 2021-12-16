/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 13:21:07 by qxia              #+#    #+#             */
/*   Updated: 2021/12/16 13:22:48 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_parser(va_list args, const char type)
{
	int	len;

	len = 0;
	if (type == 'c')
		len + = ft_printchar(va_arg(args, int));
	else if (type == 's')
		len + = ft_printstr(va_arg(args, char *));
	else if (type == 'p')
		len + = ft_printptr(va_arg(args, unsigned long long));
	else if (type == 'd' || type == 'i')
		len + = ft_printnbr(va_arg(args, int));
	else if (type == 'u')
		len + = ft_printunsignednbr(va_arg(args, insigned int));
	else if (type == 'x' || type == 'X')
		len + = ft_printhex(va_arg(args, unsigned int));
	else if (type == '%')
		len + = ft_printpourcen(va_arg(args, void));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	va_list	args;
	int	len;

	i = 0;
	len = 0;
	va_start(args, str);
	if (!str)
		return (NULL);
	while (str)
	{
		if (str[i] == '%')
		{
			len + = ft_parser(args, str[i + 1]);
			i++;
		}
		else
			len + = ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
