/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:03:10 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/12 18:19:11 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/get_next_line.h"

#include <stdio.h>

int	main(int ac, char **av)
{
	int	fd;
	int	result;
	char *line;
	
	(void)ac;
	fd = open(av[1], O_RDONLY);
	while ((result = get_next_line(fd, &line)) > 0)
	{
		printf("STATUS : %i \n", result);
		printf("RETURN : %s\n\n", line);
		free(line);
	}
	return (0);
}