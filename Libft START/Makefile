# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vjan-nie <vjan-nie@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 12:24:16 by vjan-nie          #+#    #+#              #
#    Updated: 2025/01/27 17:44:48 by vjan-nie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRC		=	ft_atoi.c\
			ft_split.c\
			ft_bzero.c\
			ft_strchr.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_strjoin.c\
			ft_isascii.c\
			ft_strlcat.c\
			ft_isdigit.c\
			ft_strlcpy.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_memchr.c\
			ft_strncmp.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_memcpy.c\
			ft_strrchr.c\
			ft_memmove.c\
			ft_strtrim.c\
			ft_memset.c\
			ft_substr.c\
			ft_putchar_fd.c\
			ft_tolower.c\
			ft_putendl_fd.c\
			ft_toupper.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_striteri.c
			
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJ		= $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
	
clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re