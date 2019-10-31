# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lboertie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 13:33:49 by lboertie       #+#    #+#                 #
#    Updated: 2019/10/31 20:00:28 by lboertie      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

LIB = libft.a
FLAGS = -Wall -Wextra -Werror -o
NAME = test
VPATH = src testfiles
SRC = ft_strlen.c output.c ft_atoi.c ft_bzero.c ft_isalpha.c ft_memcpy.c \
	ft_memset.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_memccpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strnstr.c ft_strncmp.c ft_calloc.c ft_strdup.c ft_substr.c
OBJ = $(SRC:.c=.o)

C_COMP = \033[38;5;199m 

all: $(LIB)

$(NAME): $(LIB) main.o
	@echo 'making test executable'
	@gcc $(FLAGS) $(NAME) main.o -L . -lft
	@echo 'done!'

%.o: %.c
	@echo 'recompiling $<'
	@gcc -c $< -o $@

$(LIB): $(OBJ)
	@echo 'updating the library'
	@ar -rc $@ $?
	@echo 'done!'

clean:
	@echo 'removing executable'
	@rm -f $(NAME)
	@echo 'done!'

fclean:
	@echo 'cleaning lib, exec and obj' 
	@rm -f $(NAME) $(OBJ) $(LIB) main.o
	@echo 'done!'

re: fclean all
