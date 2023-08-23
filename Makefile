NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

# Path Definition
BIN_PATH = ./bin/
HEADER_PATH = ./

# Colors Definition
GREEN = "\033[32m"
RED = "\033[31m"
CYAN = "\033[35m"
YELLOW = "\033[33m"
VIOLATE = "\033[38;5;208m"
COLOR_LIMITER = "\033[0m"

SOURCES = ft_printf.c

OBJECTS = $(addprefix $(BIN_PATH), $(SOURCES:%.c=%.o))

all: $(BIN_PATH) $(NAME)

$(BIN_PATH)%.o: %.c
	@echo $(GREEN)[Compiling]$(COLOR_LIMITER) $(YELLOW)$(<)...$(COLOR_LIMITER)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_PATH)

$(NAME): $(OBJECTS)
	@echo $(CYAN)[Generating $(NAME)]$(COLOR_LIMITER)
	ar rcs $(NAME) $?

$(BIN_PATH):
	mkdir -p $(BIN_PATH)

clean:
	@echo $(RED)[Removing Objects...]$(COLOR_LIMITER)
	@rm -rf $(BIN_PATH)

fclean: clean
	@echo $(RED)[Removing $(NAME)...]$(COLOR_LIMITER)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# Just for Test (delete later)
run: all
	@echo $(VIOLATE)[ Runing main.c ]$(COLOR_LIMITER)
	@$(CC) $(CFLAGS) -lbsd main.c $(NAME) && ./a.out

remove:
	@echo $(RED)[Removing a.out...]$(COLOR_LIMITER)
	@rm -f a.out 
