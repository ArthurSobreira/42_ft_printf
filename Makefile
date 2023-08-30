NAME = libftprintf.a
LIB_NAME = libft/libft.a
CFLAGS = -Wall -Wextra -Werror

# Path Definition
BIN_PATH = ./bin/
LIB_BIN_PATH = ./libft/bin/
MANDATORY_HEADER_PATH = ./mandatory/includes/
MANDATORY_SOURCES_PATH = ./mandatory/src/

# Colors Definition
GREEN = "\033[32m"
RED = "\033[31m"
VIOLATE = "\033[38;5;208m"
COLOR_LIMITER = "\033[0m"

SOURCES = \
	ft_printf.c \
	ft_putchar.c \
	ft_putnbr_base.c \
	ft_putptr.c \
	ft_putstr.c \

OBJECTS = $(addprefix $(BIN_PATH), $(SOURCES:%.c=%.o))

all: libft $(BIN_PATH) $(NAME)

libft:
ifeq ($(wildcard $(LIB_NAME)),)
	@make -C ./libft --no-print-directory
	@cp $(LIB_NAME) $(NAME)
endif

$(BIN_PATH)%.o: $(MANDATORY_SOURCES_PATH)%.c
	@echo $(GREEN)[Compiling]$(COLOR_LIMITER) $(notdir $(<))...
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(MANDATORY_HEADER_PATH)

$(NAME): $(OBJECTS)
	@echo $(VIOLATE) -------------------------------------------- $(COLOR_LIMITER)
	@echo $(VIOLATE)"| libftprintf.a Was Generated Successfully!! |"$(COLOR_LIMITER)
	@echo $(VIOLATE) -------------------------------------------- $(COLOR_LIMITER)
	@echo " "
	@ar rcs $(NAME) $?

$(BIN_PATH):
	@mkdir -p $(BIN_PATH)

clean:
	@echo $(RED)[Removing Objects...]$(COLOR_LIMITER)
	@rm -rf $(BIN_PATH) $(LIB_BIN_PATH)

fclean: clean
	@echo $(RED)[Removing $(notdir $(NAME))...]$(COLOR_LIMITER)
	@rm -f $(NAME) $(LIB_NAME)

re: fclean
	@make --no-print-directory

.PHONY: all clean fclean re libft

# Just for test (delete later)
run: all
	@echo $(GREEN) -------------------------------------------- $(COLOR_LIMITER)
	@echo $(GREEN)"| -------------- Runing Tests -------------- |"$(COLOR_LIMITER)
	@echo $(GREEN) -------------------------------------------- $(COLOR_LIMITER)
	@$(CC) $(CFLAGS) main.c $(NAME) -I $(MANDATORY_HEADER_PATH) && ./a.out

remove: fclean
	@echo $(RED)[Removing a.out...]$(COLOR_LIMITER)
	@rm -f a.out 
