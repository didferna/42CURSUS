FLAGS = -Wall -Werror -Wextra
CC = cc
NAME = libftprintf.a
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
OBJS = $(SRCS:.c=.o)
SRCS = ft_mn_printf.c ft_delimitators.c ft_percent.c ft_char.c ft_string.c ft_unsigned.c
all: $(LIBFT_NAME) $(NAME)

$(LIBFT_NAME): Makefile libftprintf.a
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS)  $(LIBFT) Makefile libftprintf.a
	ar rcs $(NAME) $(OBJS)

%.o: %.c Makefile libftprintf.a 
	$(CC) $(FLAGS) -I$(LIBFT_DIR) -c $< -o $@

clean:
	-rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C  $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean re fclean
