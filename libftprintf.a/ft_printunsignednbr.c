/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsignednbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:23:21 by qxia              #+#    #+#             */
/*   Updated: 2021/12/14 14:27:01 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printunsignednbr(unsigned int n)
{
	unsigned int	*num;
	unsigned int	i;	

	i = 0;
	if (!n)
		return (NULL);
	num = ft_itoa(n);
	i = ft_strlen(num);
	free (num);
	return (i);
}
