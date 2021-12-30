/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 13:18:25 by qxia              #+#    #+#             */
/*   Updated: 2021/12/30 15:17:39 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);

int		ft_parser(va_list args, char type);

int		ft_printchar(int c);

int		ft_printstr(char *str);

int		ft_ptr_len(uintptr_t n);

void	ft_putptr(uintptr_t n);

int		ft_printptr(unsigned long long ptr);

int		ft_printnbr(int c);

int		ft_printunsignednbr(unsigned int c);

int		ft_hex_len(unsigned int n);

int		ft_printhex(unsigned int n, const char type);

int		ft_printpourcen(void);

#endif
