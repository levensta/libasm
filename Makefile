NAME = libasm.a

AR = ar rcs

CC = gcc

NA = nasm

FLAGS = -Wall -Wextra -Werror

NA_FLAG = -f macho64 -L. -lasm


SOURCE = 	ft_strlen.s \
			ft_strcmp.s \
			ft_strcpy.s \
			ft_write.s \
			ft_read.s \
			ft_strdup.s

OBJECT = $(SOURCE:%.s=%.o)

all: $(NAME)

%.o: %.s
	$(NA) $(NA_FLAG) $<

$(NAME): $(OBJECT)
	$(AR) $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re