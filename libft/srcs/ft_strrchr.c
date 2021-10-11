/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:06:39 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 11:55:51 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strrchr(const char *str, int to_find)
{
	size_t 			i;
	unsigned char	to_find_c;

	i = ft_strlen((char *)str);
	to_find_c = (unsigned char)to_find;
	while (i > 0)
	{
		if (str[i] == to_find_c)
			return ((char *)str + i);
		i--;
	}
	if (str[i] == to_find_c)
		return ((char *)str + i);
	return (NULL);
}
