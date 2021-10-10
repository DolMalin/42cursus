/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:54:49 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/10 18:05:56 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memchr(const void *str, int to_find, size_t size)
{
	size_t			i;
	unsigned char	*str_c;

	i = 0;
	str_c = (unsigned char *)str;
	while (i < size)
	{
		if (str_c[i] == (unsigned char)to_find)
			return (&str_c[i]);
		i++;
	}
	return (NULL);
}
