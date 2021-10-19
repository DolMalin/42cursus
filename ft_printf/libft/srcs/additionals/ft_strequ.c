/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:00:34 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 16:13:12 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strequ(char const *str1, char const *str2)
{
	if (!str1 || !str2)
		return (0);
	while (*str1 && *str2)
	{
		if (*str1++ != *str2++)
			return (0);
	}
	return (1);
}
