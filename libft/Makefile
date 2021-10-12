# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/02 12:00:25 by pdal-mol          #+#    #+#              #
#    Updated: 2021/10/12 11:48:44 by pdal-mol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBC = \
srcs/libc/ft_strlen.c\
srcs/libc/ft_strdup.c\
srcs/libc/ft_strcmp.c\
srcs/libc/ft_strncmp.c\
srcs/libc/ft_strcpy.c\
srcs/libc/ft_strlcpy.c\
srcs/libc/ft_strncpy.c\
srcs/libc/ft_strcat.c\
srcs/libc/ft_strncat.c\
srcs/libc/ft_strlcat.c\
srcs/libc/ft_strstr.c\
srcs/libc/ft_strnstr.c\
srcs/libc/ft_strchr.c\
srcs/libc/ft_strrchr.c\
srcs/libc/ft_isdigit.c\
srcs/libc/ft_isalpha.c\
srcs/libc/ft_isalnum.c\
srcs/libc/ft_isascii.c\
srcs/libc/ft_isprint.c\
srcs/libc/ft_toupper.c\
srcs/libc/ft_tolower.c\
srcs/libc/ft_atoi.c\
srcs/libc/ft_memset.c\
srcs/libc/ft_bzero.c\
srcs/libc/ft_memcpy.c\
srcs/libc/ft_memccpy.c\
srcs/libc/ft_memmove.c\
srcs/libc/ft_memchr.c\
srcs/libc/ft_memcmp.c

ADDITIONALS = \
srcs/additionals/ft_memalloc.c\
srcs/additionals/ft_memdel.c\
srcs/additionals/ft_strnew.c\
srcs/additionals/ft_strdel.c\
srcs/additionals/ft_strclr.c\
srcs/additionals/ft_striter.c\
srcs/additionals/ft_striteri.c\
srcs/additionals/ft_strmap.c\
srcs/additionals/ft_strmapi.c\
srcs/additionals/ft_strequ.c\
srcs/additionals/ft_strnequ.c\
srcs/additionals/ft_strsub.c\
srcs/additionals/ft_strjoin.c\
srcs/additionals/ft_strtrim.c\
srcs/additionals/ft_strsplit.c\
srcs/additionals/ft_itoa.c\
srcs/additionals/ft_putchar.c\
srcs/additionals/ft_putstr.c

SRCS = $(LIBC) $(ADDITIONALS)
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror -I includes

all: $(NAME)

.c.o:
	gcc $(FLAGS) -c $< -o ${<:.c=.o}

$(NAME): ${OBJ}
	ar rcs $(NAME) $(OBJ)

clean:
	/bin/rm -rf $(OBJ)

fclean:	clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re