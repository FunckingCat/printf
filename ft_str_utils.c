/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix <unix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:35:13 by unix              #+#    #+#             */
/*   Updated: 2021/10/28 11:32:23 by unix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_char(int n)
{
	char	c;

	c = (char)n;
	write(1, &c, 1);
	return (1);
}

int	ft_put_str(char *s)
{
	int	res;

	res = 0;
	if (!s)
		return (0);
	while (*s)
	{
		write(1, s++, 1);
		res++;
	}
	return (res);
}