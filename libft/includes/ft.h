/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:39:00 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/08 23:54:38 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#   define FT_H

/* =============== LIB =============== */ 

# include <stdlib.h>
# include <unistd.h>

/* =============== PART 1 - LIBC FUNCTIONS =============== */

size_t	ft_strlen(char *str);
char	*ft_strdup(char *src);
size_t	ft_strlen(char *str);
int	ft_strcmp(const char *first, const char *second);
int	ft_strncmp(const char *first, const char *second, size_t length);

int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

int	ft_toupper(int c);
int	ft_tolower(int c);
#endif