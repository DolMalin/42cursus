/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:13:40 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/21 15:21:34 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "ft.h"

void	print_param(va_list params_info, int param_type)
{
	if ((char)param_type == 'c')
		ft_putchar((char)va_arg(params_info , int));
	if (param_type == 's')
		ft_putstr((const char *)va_arg(params_info, const char *));
	if (param_type == 'p')
		ft_putaddress(va_arg(params_info, void *));
	if (param_type == 'd')
		ft_putnbr((int)va_arg(params_info, int));
/*	if (c == 'u')
		return (va_arg(params_info, unsigned int));
	if (c == 'x')
		return (va_arg(params_info))
	*/
	if (param_type == '%')
		ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	va_list params_info;
	size_t	i;

	i = 0;
	va_start(params_info, format);
	while(format[i])
	{
		if (format[i] == '%')
			print_param(params_info, format[i++ + 1]);
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(params_info);
	return (i);
}
