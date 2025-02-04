# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: didferna <didferna@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/24 10:23:16 by didferna          #+#    #+#              #
#    Updated: 2025/01/03 15:47:05 by didferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
DIR_INC = includes
DIR_SRC = srcs
SRCS = $(DIR_SRC)/ft_putchar.c \
       $(DIR_SRC)/ft_putstr.c \
       $(DIR_SRC)/ft_strcmp.c \
       $(DIR_SRC)/ft_strlen.c \
       $(DIR_SRC)/ft_swap.c \

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all 

