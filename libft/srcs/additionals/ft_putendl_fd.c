/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:39:51 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/12 14:40:08 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	if (!str)
		return ;
	write(fd, str, ft_strlen((char *)str));
	write(fd, "\n", 1);
}
