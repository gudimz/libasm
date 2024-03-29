NAME = libasm.a
T_NAME = test_libasm
AS = nasm
ASFLAGS = -f macho64
SRCDIR = ./src/
TESTDIR = test
FILES = ft_strlen.s ft_read.s ft_write.s ft_strcpy.s ft_strcmp.s ft_strdup.s
SRC_FILES = $(addprefix $(SRCDIR), $(FILES))
OBJ = $(SRC_FILES:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

test:
		make -C ./$(TESTDIR)/
		./$(TESTDIR)/$(T_NAME)

clean:
		rm -f ${OBJ}
		make -C ./$(TESTDIR)/ clean

fclean: clean
		rm -f ${NAME}
		make -C ./$(TESTDIR)/ fclean

re: fclean all

.PHONY: all test clean fclean re