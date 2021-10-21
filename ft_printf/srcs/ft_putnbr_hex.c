/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:12:08 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/21 17:43:04 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "ft.h"

void	ft_putnbr_hex(void *input, char specifier)
{
	char	*nbr;

	nbr = NULL;
	if (specifier == 'x')
		nbr = ft_itoa_hex((unsigned long long)input, "0123456789abcdef");
	else if (specifier == 'X')
		nbr = ft_itoa_hex((unsigned long long)input, "0123456789ABCDEF");
	ft_putstr(nbr);
	free(nbr);
}
