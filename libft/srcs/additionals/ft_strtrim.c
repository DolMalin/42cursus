/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:18:28 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/11 17:00:09 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft.h"
// #include "ft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

static int	ft_isblank(char *char_p)
{
	if (*char_p == ',' && *(char_p+1) == ' ')
		return (1);
	if (*char_p == ' ' || *char_p == '\n' || *char_p == '\t')
		return (1);	
	return (0);
}

int main()
{
	char *test = "123 567, 910\n";
	int i = 0;
	int cout = 0;
	while (i < ft_strlen(test))
	{
		if (!ft_isblank(&test[i]))
			cout++;
		i++;
	}
	printf("\n%d\n", cout);
}