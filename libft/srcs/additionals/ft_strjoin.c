/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:47:37 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 16:09:10 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*output;
	size_t	len;
	size_t	i;

	i = 0;
	if (!str1 || !str2)
		return (NULL);
	len = ft_strlen((char *)str1) + ft_strlen((char *)str2);
	output = ft_strnew(len);
	if (!output)
		return (NULL);
	while (i < len)
	{
		if (i < ft_strlen((char *)str1))
			output[i] = str1[i];
		else
			output[i] = str2[i - ft_strlen((char *)str1)];
		i++;
	}
	return (output);
}
