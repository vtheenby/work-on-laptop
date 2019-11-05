# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lboertie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 13:33:49 by lboertie       #+#    #+#                 #
#    Updated: 2019/11/05 17:41:23 by lboertie      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
TEST = test
SRC = ft_strlen.c output.c ft_atoi.c ft_bzero.c ft_isalpha.c ft_memcpy.c \
	ft_memset.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_memccpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strnstr.c ft_strncmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strtrim.c \
	ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c
OBJ = $(SRC:.c=.o)
BONUS = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c \
	ft_lstclear_bonus.c ft_lstmap_bonus.c
BONUSOBJ = $(BONUS:.c=.o)

all: $(NAME)

$(OBJ): $(SRC)
	@echo 'compiling source'
	@gcc -Wall -Wextra -Werror -c $^

$(NAME): $(OBJ)
	@echo 'linking the library'
	@ar -rc $@ $^
	@echo 'done!'

bonus:
	@echo 'compiling bonus source'
	@gcc -c $(FLAGS) $(BONUS)
	@echo 'linking bonus object files to libft.a'
	@ar -rc $(NAME) $(BONUSOBJ)
	@echo 'done!'

clean:
	@echo 'removing object files'
	@rm -f $(OBJ) $(BONUSOBJ)
	@echo 'done!'

fclean:
	@echo 'cleaning lib and obj' 
	@rm -f $(NAME) $(OBJ) $(BONUSOBJ)
	@echo 'done!'

re: fclean all
