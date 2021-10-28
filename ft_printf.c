/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix <unix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:24:54 by unix              #+#    #+#             */
/*   Updated: 2021/10/28 12:24:36 by unix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_flag(char flag, va_list ap)
{
	int	len;

	if (flag == 'c')
		len = ft_put_char(va_arg(ap, int));
	if (flag == 's')
		len = ft_put_str(va_arg(ap, char *));
	if (flag == 'p')
		len = ft_put_pointer(va_arg(ap, size_t));
	if (flag == 'd' || flag == 'i')
		len = ft_put_integer(va_arg(ap, int));
	if (flag == 'u')
		len = ft_put_unsigned(va_arg(ap, unsigned int));
	if (flag == 'x' || flag == 'X')
		len = ft_put_hex(va_arg(ap, unsigned int), flag);
	return (len);
}

int	ft_printf(const char *input, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, input);
	while (*input)
	{
		if (*input != '%')
			write(1, input++, 1);
		else if (*(input + 1) == '%')
		{
			write(1, input, 2);
			input += 2;
			len++;
		}
		else
		{
			len += ft_parse_flag(*(input + 1), ap) - 1;
			input += 2;
		}
		len++;
	}
	va_end(ap);
	return (len);
}
