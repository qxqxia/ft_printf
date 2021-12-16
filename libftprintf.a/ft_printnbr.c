/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:22:17 by qxia              #+#    #+#             */
/*   Updated: 2021/12/14 14:06:54 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printnbr(int n)
{
	int	i;
	int	*num;

	i = 0;
	if (!n)
		return (NULL);
	num = ft_itoa(n);
	i = ft_strlen(num);
	free (num);
	return (i);
}
