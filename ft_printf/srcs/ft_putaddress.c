/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:14:19 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/21 17:41:10 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "ft.h"

void	ft_putaddress(void *input)
{
	char	*address;

	address = ft_itoa_hex((unsigned long long)input, "0123456789abcdef");
	ft_putstr("0x");
	ft_putstr(address);
	free(address);
}
