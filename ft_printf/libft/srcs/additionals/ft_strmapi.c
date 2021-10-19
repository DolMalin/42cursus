/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:55:51 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 14:57:49 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*output;
	size_t	i;
	size_t	len;

	if (!str)
		return (NULL);
	i = 0;
	len = ft_strlen((char *)str);
	output = ft_strnew(len);
	if (!output)
		return (NULL);
	while (i < len)
	{
		output[i] = (*f)(i, str[i]);
		i++;
	}
	return (output);
}
