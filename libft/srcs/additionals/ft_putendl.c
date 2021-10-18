/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:29:20 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/12 14:30:24 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putendl(char const *str)
{
	if (!str)
		return ;
	write(1, str, ft_strlen((char *)str));
	write(1, "\n", 1);
}