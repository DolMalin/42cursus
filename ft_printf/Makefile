# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 13:11:16 by pdal-mol          #+#    #+#              #
#    Updated: 2021/10/22 12:23:42 by pdal-mol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft

SRCS = \
srcs/ft_printf.c\
srcs/ft_strreverse.c\
srcs/ft_nblen.c\
srcs/ft_itoa_hex.c\
srcs/ft_llutoa_hex.c\
srcs/ft_putaddress.c\
srcs/ft_putnbr_hex.c\

OBJ = $(SRCS:.c=.o) 
FLAGS = -Wall -Wextra -Werror -I ./includes -I libft/includes

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