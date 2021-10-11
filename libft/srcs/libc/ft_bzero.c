/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:01:44 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/10 16:06:38 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_bzero(void *ptr, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = ptr;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
}
