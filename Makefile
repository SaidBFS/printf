# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saboufou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 17:16:05 by saboufou          #+#    #+#              #
#    Updated: 2020/02/08 16:09:46 by saboufou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRCS = SRCS/ft_atoi.c \
		SRCS/ft_itoa.c \
		SRCS/ft_strlen.c \
		SRCS/ft_strndup.c \
		SRCS/ft_itoa_base.c \
		SRCS/ft_apply_c_s_perc.c \
		SRCS/ft_apply_diu_xx_p.c \
		SRCS/ft_printf.c \
		SRCS/ft_printf_utils.c \
		SRCS/ft_parsing.c \
		SRCS/ft_print_diu_xx_p.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRCS)
	mv *.o SRCS/
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
