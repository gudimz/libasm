NAME = test_libasm
INCLD = -I ./includes
CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INCLD) -MD
SRCDIR = ./src/
FILES = main.c test_strlen.c test_strcpy.c test_strcmp.c test_strdup.c \
		test_write.c test_read.c
SRC_FILES = $(addprefix $(SRCDIR), $(FILES))
OBJ = $(SRC_FILES:.c=.o)
D_FILES = $(SRC_FILES:.c=.d)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L.. -lasm
include $(wildcard $(D_FILES))

clean:
		rm -f ${OBJ} $(D_FILES)

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re