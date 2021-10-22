/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:09:54 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/22 12:21:18 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "ft.h"

char	*ft_itoa_hex(long long int nb, char *base)
{
	char			*output;
	size_t			i;
	int				sign;

	i = 0;
	sign = 1;
	output = malloc(sizeof(char) * (ft_nblen(nb)));
	if (!output)
		return (0);
	if (nb < 0)
	{
		sign = -1;
		nb = -nb;
	}
	if (nb == 0)
		output[i] = base[nb % 16];
	while (nb > 0)
	{
		output[i] = base[nb % 16];
		nb = nb / 16;
		i++;
	}
	if (sign == -1)
		output[i++] = '-'; 
	output[i] = '\0';
	return (ft_strreverse(output));
}
