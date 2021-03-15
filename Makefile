NAME = libasm.a
CC = gcc
ASFLAGS = -Wall -Wextra -Werror nasm -f macho64
SRCDIR = ./src/
FILES = ft_strlen.s ft_read.s ft_write.s
SRC_FILES = $(addprefix $(SRCDIR), $(FILES))
OBJ = $(SRC_FILES:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
clean:
		rm -f ${OBJ}
fclean: clean
		rm -f ${NAME}

re: fclean all
