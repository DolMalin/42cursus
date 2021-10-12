/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:49:58 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/12 18:46:28 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_find_endline(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

/* 
La fonction lit bien jusqu'a la prochaine ligne, mais comme le buff lit trop, au rappel il faut lui indiquer comment revenir en arriere 

*/

int	get_next_line(int fd, char **line)
{
	char	*buffer;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer || !line || fd < 0 || BUFFER_SIZE < 1)
		return (ERR);
	read(fd, buffer, BUFFER_SIZE);
	if (ft_find_endline(buffer) > 0)
	{
		*line = ft_strsub(buffer, 0, ft_find_endline(buffer));
		return (LINE_OVER);	
	}
	return (FILE_OVER);
}