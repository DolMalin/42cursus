/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:18:28 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 20:18:21 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static int	ft_isblank(char const *char_p)
{
	if (*char_p == ',' && *(char_p + 1) == ' ')
		return (1);
	if (*char_p == ' ' || *char_p == '\n' || *char_p == '\t')
		return (1);
	return (0);
}

static size_t	ft_strtrimlen(char const *str)
{
	size_t	output;

	output = 0;
	while (*str)
	{
		if (!ft_isblank(str))
			output++;
		str++;
	}
	return (output);
}

char	*ft_strtrim(char const *str)
{
	char	*output;
	size_t	i;
	size_t	len;

	i = 0;
	output = ft_strnew(ft_strtrimlen(str));
	len = ft_strlen((char *)str);
	if (!output)
		return (NULL);
	while (len--)
	{
		if (!ft_isblank(str))
		{
			output[i] = *str;
			i++;
		}
		str++;
	}
	return (output);
}
