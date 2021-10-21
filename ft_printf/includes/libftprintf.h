/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:13:57 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/21 17:25:05 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#include <stdio.h>

#include "ft.h"

char	*ft_itoa_hex(unsigned long long nb);
void	ft_putnbr_hex(void *input);
void	ft_putaddress(void *input);
int		ft_printf(const char *format, ...);
#endif