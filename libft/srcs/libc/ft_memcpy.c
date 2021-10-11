/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:34:41 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/10 17:18:23 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*dest_c;
	const unsigned char	*src_c;

	if (!dest && !src)
		return (0);
	i = 0;
	dest_c = dest;
	src_c = src;
	while (i < size)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest);
}
