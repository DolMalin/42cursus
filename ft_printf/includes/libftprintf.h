/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:13:57 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/22 12:22:56 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#include <stdio.h>

#include "ft.h"

int	ft_nblen(unsigned long long nb);
char	*ft_strreverse(char *str);
char	*ft_itoa_hex(long long int nb, char *base);
char	*ft_llutoa_hex(unsigned long long nb, char *base);
void	ft_putnbr_hex(void *input, char specifier);
void	ft_putaddress(void *input);
int		ft_printf(const char *format, ...);
#endif