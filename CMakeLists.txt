cmake_minimum_required(VERSION 3.20)
project(Libft C)

set(CMAKE_C_STANDARD 99)

add_executable(Libft ft_isalpha.c libft.h ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c)
