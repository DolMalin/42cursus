/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:14:19 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/22 12:09:16 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "ft.h"

void	ft_putaddress(void *input)
{
	char	*address;

	address = ft_llutoa_hex((unsigned long long)input, "0123456789abcdef");
	ft_putstr("0x");
	ft_putstr(address);
	free(address);
}
