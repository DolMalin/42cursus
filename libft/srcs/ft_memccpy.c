/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:23:29 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/10 16:58:41 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t				i;
	unsigned char		*dest_c;
	const unsigned char	*src_c;

	i = 0;
	dest_c = dest;
	src_c = src;
	while (i < size)
	{
		dest_c[i] = src_c[i];
		if (dest_c[i] == (unsigned char)c)
			return (&dest_c[i + 1]);
		i++;
	}
	return (NULL);
}
