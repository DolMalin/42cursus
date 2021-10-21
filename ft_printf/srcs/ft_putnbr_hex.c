/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:12:08 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/21 17:24:05 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "ft.h"

void	ft_putnbr_hex(void *input)
{
	char	*nbr;

	nbr = ft_itoa_hex((unsigned long long)input);
	ft_putstr(nbr);
	free(nbr);
}
