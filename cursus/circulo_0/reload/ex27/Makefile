OBJ = $(SRCS:.c=.o)
CC = cc
CFLGS = -Wall -Werror -Wextra
NAME = ft_display_file
SRCS = ft_display_file.c

all = $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
