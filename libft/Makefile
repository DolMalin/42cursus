# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/02 12:00:25 by pdal-mol          #+#    #+#              #
#    Updated: 2021/10/10 18:03:56 by pdal-mol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = \
srcs/ft_strlen.c\
srcs/ft_strdup.c\
srcs/ft_strcmp.c\
srcs/ft_strncmp.c\
srcs/ft_isalpha.c\
srcs/ft_isdigit.c\
srcs/ft_isalnum.c\
srcs/ft_isascii.c\
srcs/ft_isprint.c\
srcs/ft_toupper.c\
srcs/ft_tolower.c\
srcs/ft_strcpy.c\
srcs/ft_strcat.c\
srcs/ft_atoi.c\
srcs/ft_memset.c\
srcs/ft_bzero.c\
srcs/ft_memcpy.c\
srcs/ft_memccpy.c\
srcs/ft_memmove.c\
srcs/ft_memchr.c

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