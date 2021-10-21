/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:17:46 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/21 17:12:55 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "ft.h"

static int	ft_nblen(unsigned long long nb)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (nb < 0)
	{
		count++;
		nb *= (-1);
	}
	count++;
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return (count + 1);
}

char	*ft_strreverse(char *str)
{
	char	buff;
	size_t	i;

	i = 0;
	while (i < ft_strlen(str) / 2)
	{
		buff = str[i];
		str[i] = str[ft_strlen(str) - i - 1];
		str[ft_strlen(str) - i - 1] = buff;
		i++;
	}
	return (str);
}

char	*ft_itoa_hex(unsigned long long nb)
{
	char	*output;
	size_t	i;

	i = 0;
	output = malloc(sizeof(char) * (ft_nblen(nb)));
	if (!output)
		return (0);
	if (nb == 0)
		output[i] = "0123456789abcdef"[nb % 16];
	while (nb > 0)
	{
		output[i] = "0123456789abcdef"[nb % 16];
		nb = nb / 16;
		i++;
	}
	output[i] = '\0';
	return (ft_strreverse(output));
}
