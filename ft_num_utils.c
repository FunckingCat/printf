/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix <unix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:12:20 by unix              #+#    #+#             */
/*   Updated: 2021/10/28 12:53:05 by unix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(size_t p)
{
	int	len;

	if (p == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	len = 2;
	ft_write_hex_ptr(p, &len);
	return (len);
}

int	ft_put_integer(int num)
{
	int	len;

	len = 0;
	if (num == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		len = 1;
		num = -num;
	}
	ft_write_unsigned_int((unsigned int)num, &len);
	return (len);
}

int	ft_put_unsigned(unsigned int num)
{
	int	len;

	len = 0;
	ft_write_unsigned_int((unsigned int)num, &len);
	return (len);
}

int	ft_put_hex(unsigned int num, char flag)
{
	int	len;

	len = 0;
	if (flag == 'X')
		ft_write_hex_upper(num, &len);
	if (flag == 'x')
		ft_write_hex_lower(num, &len);
	return (len);
}
