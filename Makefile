# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 12:06:22 by aschmidt          #+#    #+#              #
#    Updated: 2024/04/24 12:50:27 by aschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
	  ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
	  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
	  ft_strrchr.c ft_tolower.c ft_toupper.c

OBJS	:= $(SRC:%.c=%.o)

NAME	= libft.a

CC 	= gcc

CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

#ar archive tool to create, modify...from archives (Replace,Create,Swrite index)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CCFLAGS) -o $@ -c $<

#rm -f force in case the file doesnt exist
clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
