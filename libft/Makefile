FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SOURCES = ft_get_nline.c\
			ft_strfill.c\
			ft_strcount.c\
			ft_atoi.c\
		  ft_bzero.c\
		  ft_itoa.c\
		  ft_isalnum.c\
		  ft_isalpha.c\
		  ft_isascii.c\
		  ft_isdigit.c\
		  ft_isprint.c\
		  ft_lstadd.c\
		  ft_lstdel.c\
		  ft_lstdelone.c\
		  ft_lstiter.c\
		  ft_lstmap.c\
		  ft_lstnew.c\
		  ft_memalloc.c\
		  ft_memset.c\
		  ft_memcpy.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_memdel.c\
		  ft_memmove.c\
		  ft_putchar.c\
		  ft_putchar_fd.c\
		  ft_putendl.c\
		  ft_putendl_fd.c\
		  ft_putnbr.c\
		  ft_putnbr_fd.c\
		  ft_putstr.c\
		  ft_putstr_fd.c\
		  ft_strequ.c\
		  ft_striter.c\
		  ft_striteri.c\
		  ft_strjoin.c\
		  ft_strcat.c\
		  ft_strchr.c\
		  ft_strcmp.c\
		  ft_strcpy.c\
		  ft_strdel.c\
		  ft_strclr.c\
		  ft_strdup.c\
		  ft_strlcat.c\
		  ft_strmap.c\
		  ft_strmapi.c\
		  ft_strncat.c\
		  ft_strncmp.c\
		  ft_strncpy.c\
		  ft_strnequ.c\
		  ft_strnew.c\
		  ft_strnstr.c\
		  ft_strlen.c\
		  ft_strrchr.c\
		  ft_strsplit.c\
		  ft_strstr.c\
		  ft_strsub.c\
		  ft_strtrim.c\
		  ft_tolower.c\
		  ft_toupper.c\

INCLUDES = ./includes/

OBJECT = $(SOURCES:.c=.o)

$(NAME): $(OBJECT)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)
	@echo "\033[1;34mLibft\t\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

%.o: %.c
	@gcc $(FLAGS) -I$(INCLUDES) -o $@ -c $?

all: $(NAME)

clean:
	@rm -rf $(OBJECT)
	@echo "\033[1;34mLibft\t\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -fr $(NAME)
	@echo "\033[1;34mLibft\t\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all
