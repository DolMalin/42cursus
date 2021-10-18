/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:49:58 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/18 18:10:12 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	find_endline(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return ((int)i);
		i++;
	}
	return (-1);
}

static int	read_file(int fd, char **str)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*new_line;
	int		ret;

	while (1)
	{
		ft_bzero(&buffer, BUFFER_SIZE + 1);
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret < 1)
			return (ret);		
		if (*str)
		{
			new_line = ft_strjoin(*str, buffer);
			free(*str);
			*str = new_line;
		}
		else
			*str = ft_strdup(buffer);
		if (find_endline(*str) != -1)
			return	ret;
	}
}

static void	remove_first_line(char **str)
{
	char	*rest;
	size_t	endline;

	endline = find_endline(*str);
	rest = ft_strsub(*str, endline + 1, ft_strlen(*str) - endline);
	free(*str);
	*str = rest;
}

static char	*get_line(char *str)
{
	char	*output;
	size_t	i;

	output = (char *)malloc(sizeof(char) * (find_endline(str) + 1));
	i = 0;
	if (!output)
		return (NULL);
	while ((int)i < find_endline(str))
	{
		output[i] = str[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

int	get_next_line(int fd, char **line)
{
	static char	*str;
	int	ret;

	if (!line || fd < 0 || BUFFER_SIZE < 1)
		return (ERR);
	if (!str || find_endline(str) == -1)
	{
		ret = read_file(fd, &str);
		if (ret == -1)
			return (ERR);
		if (ret == 0)
		{
			*line = ft_strdup(str);
			free(str);
			return (FILE_OVER);
		}
	}
	*line = get_line(str);
	remove_first_line(&str);
	return (LINE_OVER);	
} 
