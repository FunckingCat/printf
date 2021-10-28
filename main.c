/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix <unix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:20:37 by unix              #+#    #+#             */
/*   Updated: 2021/10/28 12:08:41 by unix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char *c;
	int res;

	c = "ill";
	c = ft_strdup(c);
	ft_printf("---------------------\n");
	res = ft_printf("--> %x <--", UINT_MAX);
	ft_printf("\n---------------------\n");
	printf("res - %d\n", res);
	return (0);
}

// tet()
// {
//     make &&
//     gcc main.c libftprintf.a libft.a && 
//     rm *.o &&
//     ./a.out
// }