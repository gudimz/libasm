NAME = test_libasm.a
INCLD = -I ./includes
CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INCLD)
SRCDIR = ./src/
FILES = main.c test_strlen.c test_strcpy.c test_strcmp.c test_strdup.c test_write.c\
		test_write.c
SRC_FILES = $(addprefix $(SRCDIR), $(FILES))
OBJ = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
clean:
		rm -f ${OBJ}
fclean: clean
		rm -f ${NAME}

re: fclean all