# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/02 12:00:25 by pdal-mol          #+#    #+#              #
#    Updated: 2021/10/08 23:54:25 by pdal-mol         ###   ########.fr        #
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
srcs/ft_tolower.c

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