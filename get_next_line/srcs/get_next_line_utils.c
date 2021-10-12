/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:51:00 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/12 18:40:43 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char	*output;

	if (!str)
		return (NULL);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	if (start >= ft_strlen((char *)str))
	{
		output[0] = 0;
		return (output);
	}
	while (len--)
		output[len] = str[len + start];
	return (output);
}