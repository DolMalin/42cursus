/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:19:31 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 20:11:30 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strnew(size_t size)
{
	char	*output;

	output = ft_memalloc((size + 1) * sizeof(char));
	if (!output)
		return (NULL);
	return (output);
}
