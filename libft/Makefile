NAME = libft.a

SRC = ft_isascii.c ft_memalloc.c ft_memmove.c ft_putnbr.c ft_strcpy.c ft_strlen.c \
	  ft_toupper.c ft_isdigit.c ft_memccpy.c ft_memset.c ft_putnbr_fd.c ft_strdel.c \
	  ft_strncmp.c ft_atoi.c ft_islower.c ft_memchr.c ft_putchar.c ft_putstr.c \
	  ft_strdup.c ft_strncpy.c ft_bzero.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_strequ.c ft_strnequ.c ft_isalnum.c ft_isspace.c ft_memcpy.c \
	  ft_putendl.c ft_strclr.c ft_striter.c ft_strnew.c ft_isalpha.c ft_isupper.c \
	  ft_memdel.c ft_putendl_fd.c ft_strcmp.c ft_striteri.c ft_tolower.c ft_strcat.c \
	  ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strmap.c \
	  ft_strmapi.c ft_strnstr.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
	  ft_itoa.c ft_wordcount.c ft_strsplit.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	  ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_strclen.c ft_iscfound.c

OBJ = $(SRC:.c=.o) 

FLAGS += -Wall -Werror -Wextra -c

$(NAME): $(OBJ)
	gcc $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
