/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:00:13 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 12:01:51 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strnstr(char *str, char *to_find, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (ft_strlen(to_find) < 1)
		return (str);
	while (str[i] && i < size)
	{
		k = i;
		j = 0;
		while (str[k] == to_find[j] && k < size)
		{
			if (to_find[j + 1] == 0)
				return (&str[i]);
			j++;
			k++;
		}
		i++;
	}
	return (0);
}