/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix <unix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:24:54 by unix              #+#    #+#             */
/*   Updated: 2021/10/26 19:16:49 by unix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_hex(int num)
{
	if (num > 15)
		ft_write_hex(num / 16);
	write(1, &HEX[num % 16], 1);
}

int	ft_printf(const char *input, ...)
{
	printf("%s\n", input);
	ft_write_hex(                            );
	return (0);
}