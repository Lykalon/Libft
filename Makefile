NAME = libft.a
#
SRCS =	ft_isalpha.c ft_atoi.c ft_isdigit.c\
		ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_strlen.c ft_memset.c ft_bzero.c\
		ft_memcpy.c ft_memmove.c ft_strlcpy.c\
		ft_strlcat.c ft_toupper.c ft_tolower.c\
		ft_strchr.c ft_strrchr.c ft_strncmp.c\
		ft_memchr.c ft_memcmp.c ft_strnstr.c\
		ft_calloc.c ft_strdup.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_split.c\
		ft_itoa.c
#
SRCS_B =
#
HEADER = libft.h
OBJ = $(patsubst %.c, %.o, $(SRCS))
OBJ_B = $(SRCS_B:%.c=%.o)
#
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)
#
.PHONY : all clean fclean re bonus
#
all : $(NAME)
#
$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $?
#
%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
#
bonus :
	make OBJ
#
clean :
	rm -f $(OBJ) $(OBJ_B)
#
fclean : clean
	$(RM) $(NAME)
#
re : fclean all