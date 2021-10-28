/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix <unix@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:37:18 by unix              #+#    #+#             */
/*   Updated: 2021/10/28 13:09:22 by unix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define HEXU "0123456789ABCDEF"
# define HEXD "0123456789abcdef"

int		ft_printf(const char *input, ...);

int		ft_put_char(int n);
int		ft_put_str(char *s);

void	ft_write_hex_ptr(size_t num, int *res);
void	ft_write_hex_lower(unsigned int num, int *res);
void	ft_write_hex_upper(unsigned int num, int *res);
void	ft_write_unsigned_int(unsigned int num, int *res);
int		ft_put_pointer(size_t p);
int		ft_put_integer(int num);
int		ft_put_unsigned(unsigned int num);
int		ft_put_hex(unsigned int num, char flag);

#endif
