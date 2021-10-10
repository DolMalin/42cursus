/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:39:00 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/10/10 18:03:42 by pdal-mol         ###   ########.fr       */
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
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);

int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

int	ft_toupper(int c);
int	ft_tolower(int c);

int	ft_atoi(char *str);

void	*ft_memset(void *ptr, int c, size_t size);
void	ft_bzero(void *ptr, size_t size);
void 	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memchr(const void *str, int to_find, size_t size);

#endif