/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:51:00 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/18 18:09:54 by pdal-mol         ###   ########.fr       */
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

void	ft_bzero(void *ptr, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = ptr;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
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

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*output;
	size_t	len;
	size_t	i;

	i = 0;
	if (!str1 || !str2)
		return (NULL);
	len = ft_strlen((char *)str1) + ft_strlen((char *)str2);
	output = malloc(sizeof(char) * (len + 1));
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
	output[i] = '\0';
	return (output);
}

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
