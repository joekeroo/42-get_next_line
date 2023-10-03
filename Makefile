NAME = gnl

GCC = gcc
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3
INCLUDES = -Iinc
RM = rm -rf

SRC_PATH = src
OBJ_PATH = obj

MAIN = main.c
SRC = get_next_line.c get_next_line_bonus.c get_next_line_utils.c
OBJ = ${addprefix ${OBJ_PATH}/, ${SRC:.c=.o}}

all: ${NAME}

${NAME}: ${OBJ}
	@${GCC} ${CFLAGS} ${INCLUDES} -o ${NAME} ${MAIN} ${OBJ}

${OBJ_PATH}/%.o: ${SRC_PATH}/%.c
	@mkdir -p ${@D}
	@${GCC} ${CFLAGS} ${INCLUDES} -c $< -o $@

test:
	@make re && ./gnl

clean:
	@${RM} ${OBJ_PATH}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY = all clean fclean re