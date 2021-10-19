# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 13:11:16 by pdal-mol          #+#    #+#              #
#    Updated: 2021/10/19 14:57:42 by pdal-mol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft

SRCS = \
srcs/ft_printf.c

OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror -I ./includes

all: $(NAME)

.c.o:
	gcc $(FLAGS) -c $< -o ${<:.c=.o}

$(NAME): ${OBJ}
	make -C $(LIBFT)
	cp libft/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean:	clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re