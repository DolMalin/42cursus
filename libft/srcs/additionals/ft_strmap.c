/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:40:10 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 14:55:46 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*output;
	size_t	len;

	if (!str)
		return (NULL);
	len = ft_strlen((char *)str);
	output = ft_strnew(len);
	if (!output)
		return (NULL);
	while (len--)
		output[len] = (*f)(str[len]);
	return (output);
}
