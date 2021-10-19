/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:12:32 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 15:46:42 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char	*output;

	if (!str)
		return (NULL);
	output = ft_strnew(len);
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
