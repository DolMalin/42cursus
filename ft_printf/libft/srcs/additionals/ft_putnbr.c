/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:32:19 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/21 15:11:35 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int nb)
{
	unsigned long long a;	
	char		nb_char;

	a = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		a *= -1;
	}
	nb_char = a % 10 + '0';
	if (a > 9)
		ft_putnbr(a / 10);
	write(1, &nb_char, 1);
}
