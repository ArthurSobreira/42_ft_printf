NAME = libftprintf.a
LIB_NAME = libft/libft.a
CFLAGS = -Wall -Wextra -Werror

# Path Definition
BIN_PATH = ./bin/
SOURCES_PATH = ./src/
LIB_BIN_PATH = ./libft/bin/
HEADER_PATH = ./includes/

# Colors Definition
GREEN = "\033[32m"
RED = "\033[31m"
YELLOW = "\033[33m"
VIOLATE = "\033[38;5;208m"
COLOR_LIMITER = "\033[0m"

SOURCES = \
	ft_printf.c \
	ft_printf_utils.c \

OBJECTS = $(addprefix $(BIN_PATH), $(SOURCES:%.c=%.o))

all: libft $(BIN_PATH) $(NAME)

libft:
	@make -C ./libft --no-print-directory
	@cp $(LIB_NAME) $(NAME)

$(BIN_PATH)%.o: $(SOURCES_PATH)%.c
	@echo $(GREEN)[Compiling]$(COLOR_LIMITER) $(YELLOW)$(notdir $(<))...$(COLOR_LIMITER)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_PATH)

$(NAME): $(OBJECTS)
	@echo $(VIOLATE) -------------------------------------------- $(COLOR_LIMITER)
	@echo $(VIOLATE)"| libftprintf.a Was Generated Successfully!! |"$(COLOR_LIMITER)
	@echo $(VIOLATE) -------------------------------------------- $(COLOR_LIMITER)
	@ar rcs $(NAME) $?

$(BIN_PATH):
	@mkdir -p $(BIN_PATH)

clean:
	@echo $(RED)[Removing Objects...]$(COLOR_LIMITER)
	@rm -rf $(BIN_PATH) $(LIB_BIN_PATH)

fclean: clean
	@echo $(RED)[Removing $(notdir $(NAME))...]$(COLOR_LIMITER)
	@rm -f $(NAME) $(LIB_NAME)

re: fclean all

.PHONY: all clean fclean re libft

# Just for test (delete later)
run:
	@echo $(GREEN) -------------------------------------------- $(COLOR_LIMITER)
	@echo $(GREEN)"| -------------- Runing Tests -------------- |"$(COLOR_LIMITER)
	@echo $(GREEN) -------------------------------------------- $(COLOR_LIMITER)
	@$(CC) $(CFLAGS) main.c -I $(HEADER_PATH) -lbsd $(NAME) && ./a.out

remove: fclean
	@echo $(RED)[Removing a.out...]$(COLOR_LIMITER)
	@rm -f a.out 
