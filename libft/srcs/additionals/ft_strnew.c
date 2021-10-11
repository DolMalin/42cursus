/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:19:31 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 16:11:50 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strnew(size_t size)
{
	char	*output;

	output = ft_memalloc(size + 1);
	if (!output)
		return (NULL);
	ft_bzero(output, size + 1);
	return (output);
}
