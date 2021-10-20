/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:13:57 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/20 15:26:05 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#include <stdio.h>

#include "ft.h"

int	ft_printf(const char *format, ...);
#endif