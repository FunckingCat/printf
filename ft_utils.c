/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix <unix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:05:38 by unix              #+#    #+#             */
/*   Updated: 2021/10/28 12:48:47 by unix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_hex_ptr(size_t num, int *res)
{
	if (num > 15)
	{
		ft_write_hex_ptr(num / 16, res);
	}
	write(1, &HEXD[num % 16], 1);
	*res += 1;
}

void	ft_write_hex_upper(unsigned int num, int *res)
{
	if (num > 15)
		ft_write_hex_upper(num / 16, res);
	write(1, &HEXU[num % 16], 1);
	*res += 1;
}

void	ft_write_hex_lower(unsigned int num, int *res)
{
	if (num > 15)
		ft_write_hex_lower(num / 16, res);
	write(1, &HEXD[num % 16], 1);
	*res += 1;
}

void	ft_write_unsigned_int(unsigned int num, int *res)
{
	char	c;

	if (num >= 10)
		ft_write_unsigned_int(num / 10, res);
	c = (char)(num % 10 + 48);
	write(1, &c, 1);
	*res += 1;
}
