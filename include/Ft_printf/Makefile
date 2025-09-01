SRCS = ft_printf.c ft_handle_char.c ft_handle_int.c ft_handle_hex.c
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

$(NAME): $(OBJS)
	$(LIBC) $@ $^

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS} 

fclean: clean
	${RM} ${NAME} 

re: fclean all

.PHONY : all clean fclean re