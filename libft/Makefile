NAME = libft.a

LIST =			ft_atoi.c		ft_bzero.c			ft_calloc.c\
				ft_isalnum.c	ft_isalpha.c		ft_isascii.c\
				ft_isdigit.c	ft_isprint.c		ft_memccpy.c\
				ft_memchr.c		ft_memcmp.c			ft_memmove.c\
				ft_memcpy.c		ft_memset.c			ft_strchr.c\
				ft_strdup.c		ft_strlcat.c		ft_strlcpy.c\
				ft_strlen.c		ft_strncmp.c		ft_strnstr.c\
				ft_strrchr.c	ft_tolower.c		ft_toupper.c\
				ft_substr.c		ft_strjoin.c		ft_strtrim.c\
				ft_split.c 		ft_itoa.c			ft_strmapi.c\
				ft_putchar_fd.c	ft_putstr_fd.c		ft_putendl_fd.c\
				ft_putnbr_fd.c

LIST_BONUS =	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c\
				ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c\
				ft_lstclear.c	ft_lstiter.c		ft_lstmap.c

OBJ = $(LIST:.c=.o)
OBJ_BONUS = $(LIST_BONUS:.c=.o)

CC = gcc

REM = rm -f

LIBH = libft.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus : $(OBJ) $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME)

%.o : %.c $(LIBH)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(REM) $(OBJ) $(OBJ_BONUS)

fclean : clean
	$(REM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
