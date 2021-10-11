/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:51:00 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 12:12:18 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strchr(const char *str, int to_find)
{
	char	to_find_c;

	to_find_c = (unsigned char)to_find;
	while (*str != to_find_c)
	{
		if (*str == 0)
			return (NULL);
		str++;
	}
	return ((char *)str);
}
