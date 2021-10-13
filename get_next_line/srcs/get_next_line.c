/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:49:58 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/13 15:40:38 by pdal-mol         ###   ########.fr       */
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
	char		*buffer;
	static char	*rest;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer || !line || fd < 0 || BUFFER_SIZE < 1)
		return (ERR);
	read(fd, buffer, BUFFER_SIZE);
	if (ft_find_endline(buffer) > 0)
	{
		// SI PREMIER CALL DE LA FONCTION
		if (!rest)
		{
			rest = ft_strsub(buffer, ft_find_endline(buffer), BUFFER_SIZE - ft_find_endline(buffer));
			*line = ft_strsub(buffer, 0, ft_find_endline(buffer));
		}
		else
		{
			rest = ft_strsub(buffer, ft_find_endline(buffer), BUFFER_SIZE - ft_find_endline(buffer));
			*line = ft_strjoin(rest, ft_strsub(buffer, 0, ft_find_endline(buffer)));
		}
		printf("\nrest : %s\n", rest);
		return (LINE_OVER);	
	}
	else
	{
		if (!rest)
			rest = ft_strsub(buffer, ft_find_endline(buffer), BUFFER_SIZE - ft_find_endline(buffer));
		else
			rest = ft_strsub(buffer, ft_find_endline(buffer), BUFFER_SIZE - ft_find_endline(buffer));
	}
}
