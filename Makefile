# Nome do executável
NAME = so_long

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./include

# Pastas e fontes
SRC_DIR = src
SRC = $(shell find $(SRC_DIR) -name "*.c")
OBJ = $(SRC:.c=.o)

# Bibliotecas
LIBFT_DIR = include/Libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = include/Ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

GNL_DIR = include/Gnl
GNL_SRC = $(shell find $(GNL_DIR) -name "*.c")
GNL_OBJ = $(GNL_SRC:.c=.o)
GNL = $(GNL_DIR)/gnl.a

MLX_DIR = include/minilibx-linux
MLX = $(MLX_DIR)/libmlx.a
MLX_FLAGS = -L$(MLX_DIR) -lmlx -lXext -lX11 -lm -lz

# ---------------------------------------------------------
# Regras
all: $(NAME)

# Compila o executável
$(NAME): $(OBJ) $(GNL)
	@$(MAKE) -C $(LIBFT_DIR)
	@$(MAKE) -C $(PRINTF_DIR)
	@$(MAKE) -C $(MLX_DIR)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) $(GNL) $(MLX) $(MLX_FLAGS) $(INCLUDES) -o $(NAME)

# Compila objetos do gnl
$(GNL): $(GNL_OBJ)
	ar rcs $(GNL) $(GNL_OBJ)

# Regra genérica para compilar .c em .o
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Limpar objetos
clean:
	$(RM) $(OBJ) $(GNL_OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(MAKE) -C $(PRINTF_DIR) clean
	@$(MAKE) -C $(MLX_DIR) clean

# Limpar tudo
fclean: clean
	$(RM) $(NAME) $(GNL)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@$(MAKE) -C $(PRINTF_DIR) fclean

# Recompilar tudo
re: fclean all

.PHONY: all clean fclean re
