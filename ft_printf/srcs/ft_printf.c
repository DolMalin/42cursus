/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:13:40 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/19 15:01:04 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


void	print_param(va_list params_info, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(params_info , char));
/*	if (c == 's')
		return (va_arg(params_info , const char *));
	if (c == 'p')
		return (va_arg(params_info, void *));
	if (c == 'd')
		return (va_arg(params_info, int));
	if (c == 'u')
		return (va_arg(params_info, unsigned int));
	if (c == 'x')
		return (va_arg(params_info))
	*/
}

int	ft_printf(const char *format, ...)
{
	va_list params_info;

	va_start(params_info, format);
	print_param(params_info, 'p');
	return (1);
}
