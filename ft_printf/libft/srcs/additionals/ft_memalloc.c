/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:50:24 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/12 10:41:45 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memalloc(size_t size)
{
	void	*output;

	output = malloc(size);
	if (!output)
		return (NULL);
	ft_bzero(output, size);
	return (output);
}
