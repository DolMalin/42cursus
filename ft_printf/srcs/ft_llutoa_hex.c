/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llutoa_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:17:46 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/22 12:11:32 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "ft.h"

char	*ft_llutoa_hex(unsigned long long nb, char *base)
{
	char	*output;
	size_t	i;

	i = 0;
	output = malloc(sizeof(char) * (ft_nblen(nb)));
	if (!output)
		return (0);
	if (nb == 0)
		output[i] = base[nb % 16];
	while (nb > 0)
	{
		output[i] = base[nb % 16];
		nb = nb / 16;
		i++;
	}
	output[i] = '\0';
	return (ft_strreverse(output));
}
