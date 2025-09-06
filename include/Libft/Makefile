SRCS = ft_strlen.c  ft_strdup.c  ft_strncmp.c ft_strtrim.c ft_strlcpy.c ft_itoa.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a
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