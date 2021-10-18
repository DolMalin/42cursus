/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:48:00 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/18 18:27:46 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# define ERR -1
# define LINE_OVER 1
# define FILE_OVER 0

int		get_next_line(int fd, char **line);
size_t	ft_strlen(char *str);
void	ft_bzero(void *ptr, size_t size);
char	*ft_strsub(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *str1, char const *str2);
char	*ft_strdup(char *src);

#endif