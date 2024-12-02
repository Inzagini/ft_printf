SRC_DIR := src
INCLUDE := include
NAME := libftprintf.a
MAKE_LIB := Make_libft
FILES := $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES := ${FILES:.c=.o}

all: ${NAME}

${NAME}: ${OBJ_FILES}
	@ar rcs $@ $^
	@echo "libary created"

clean:
	rm -f ${SRC_DIR}/*.o
fclean: clean
	rm -f ${NAME}
re: clean fclean all

t:
	cc -Wall -Werror -Wextra src/ft_printf.c -I ${include} -L. libftprintf.a -g\
	&& valgrind ./a.out | cat -e
.PHONY: all clean fclean re test
