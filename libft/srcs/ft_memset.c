/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:52:44 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/09 13:06:20 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memset(void *ptr, int c, size_t size)
{
	size_t	i;
	unsigned char *str;

	i = 0;
	str = ptr;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (ptr);
}
