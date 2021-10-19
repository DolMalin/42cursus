/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:05:08 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/12 11:39:59 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static size_t	ft_nblen(int nb)
{
	size_t	i;
	size_t	count;

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

static char	*ft_strreverse(char *str)
{
	char		buff;
	size_t		i;

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

char	*ft_itoa(int nb)
{
	char		*output;
	long int	nbr;
	int			sign;
	size_t		i;

	sign = 1;
	i = 0;
	nbr = nb;
	output = ft_strnew(ft_nblen(nbr));
	if (!output)
		return (0);
	if (nbr < 0)
	{
		output[ft_nblen(nb) - 2] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		output[i] = nbr % 10 + '0';
	while (nbr > 0)
	{
		output[i++] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (ft_strreverse(output));
}
