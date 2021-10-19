/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:07:59 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 16:14:08 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strnequ(char const *str1, char const *str2, size_t size)
{
	if (!str1 || !str2)
		return (0);
	while (*str1 && *str2 && size--)
	{
		if (*str1++ != *str2++)
			return (0);
	}
	return (1);
}
