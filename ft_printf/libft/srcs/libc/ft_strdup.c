/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:45:13 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 20:18:03 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy_str;

	i = 0;
	copy_str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!copy_str)
		return (0);
	while (src[i])
	{
		copy_str[i] = src[i];
		i++;
	}
	copy_str[i] = '\0';
	return (copy_str);
}
