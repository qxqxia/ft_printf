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

int	ft_printunsignednbr(unsigned int n)
{
	char			*num;
	unsigned int	i;	

	i = 0;
	if (!n)
		return (0);
	num = ft_itoa(n);
	i = ft_strlen(num);
	free (num);
	return (i);
}
