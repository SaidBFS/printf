# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saboufou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 17:16:05 by saboufou          #+#    #+#              #
#    Updated: 2020/02/07 18:50:55 by saboufou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRCS = libft/ft_atoi.c \
		libft/ft_bzero.c \
		libft/ft_calloc.c \
		libft/ft_isalnum.c \
		libft/ft_isalpha.c \
		libft/ft_isascii.c \
		libft/ft_isdigit.c \
		libft/ft_isprint.c \
		libft/ft_itoa.c \
		libft/ft_memccpy.c \
		libft/ft_memchr.c \
		libft/ft_memcmp.c \
		libft/ft_memcpy.c \
		libft/ft_memmove.c \
		libft/ft_memset.c \
		libft/ft_putchar_fd.c \
		libft/ft_putendl_fd.c \
		libft/ft_putnbr_fd.c \
		libft/ft_putstr_fd.c \
		libft/ft_split.c \
		libft/ft_strchr.c \
		libft/ft_strdup.c \
		libft/ft_strjoin.c \
		libft/ft_strlcat.c \
		libft/ft_strlcpy.c \
		libft/ft_strlen.c \
		libft/ft_strmapi.c \
		libft/ft_strncmp.c \
		libft/ft_strnstr.c \
		libft/ft_strrchr.c \
		libft/ft_strtrim.c \
		libft/ft_substr.c \
		libft/ft_tolower.c \
		libft/ft_toupper.c \
		libft/ft_lstadd_front_bonus.c \
		libft/ft_lstadd_back_bonus.c \
		libft/ft_lstdelone_bonus.c \
		libft/ft_lstclear_bonus.c \
		libft/ft_lstiter_bonus.c \
		libft/ft_lstmap_bonus.c \
		libft/ft_lstlast_bonus.c \
		libft/ft_lstnew_bonus.c \
		libft/ft_strndup.c \
		libft/ft_itoa_base.c \
		libft/ft_lstsize_bonus.c

PRINTF = SRCS/ft_apply_c_s_perc.c \
	SRCS/ft_apply_diu_xx_p.c \
	SRCS/ft_printf.c \
	SRCS/ft_printf_utils.c \
	SRCS/ft_parsing.c \
	SRCS/ft_print_diu_xx_p.c

OBJ = $(SRCS:.c=.o) $(PRINTF:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRCS)
	mv *.o libft/
	gcc $(CFLAGS) -c $(PRINTF)
	mv *.o SRCS/
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)
	rm libft/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
