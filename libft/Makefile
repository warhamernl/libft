# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mlokhors <mlokhors@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/02 12:58:17 by mlokhors       #+#    #+#                 #
#    Updated: 2019/09/29 10:01:10 by mlokhors      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR = ./
OBJ_DIR = ./.obj/
FLAGS = -Wall -Werror -Wextra -I./includes
CC = gcc

OBJ_NAMES =  ft_memcpy \
			 ft_memset \
			 ft_memmove \
			 ft_bzero \
			 ft_memccpy \
			 ft_memchr \
			 ft_memcmp \
			 ft_strlen \
			 ft_strdup \
			 ft_strcpy \
			 ft_strncpy \
			 ft_strcat \
			 ft_strncat \
			 ft_strlcat \
			 ft_strchr \
			 ft_strrchr \
			 ft_strstr \
			 ft_strnstr \
			 ft_strcmp \
			 ft_strncmp \
			 ft_atoi \
			 ft_isalpha \
			 ft_isdigit \
			 ft_isalnum \
			 ft_isascii \
			 ft_isprint \
			 ft_toupper \
			 ft_tolower \
			 ft_memalloc \
			 ft_memdel \
			 ft_strnew \
			 ft_strdel \
			 ft_strclr \
			 ft_striter \
			 ft_striteri \
			 ft_strmap \
			 ft_strmapi \
			 ft_strequ \
			 ft_strnequ \
			 ft_strsub \
			 ft_strjoin \
			 ft_strtrim \
			 ft_itoa \
			 ft_strsplit \
			 ft_putchar \
			 ft_putstr \
			 ft_putendl \
			 ft_putnbr \
			 ft_putchar_fd \
			 ft_putstr_fd \
			 ft_putendl_fd \
			 ft_putnbr_fd \
			 ft_isspace \
			 ft_lstnew \
			 ft_lstdelone \
			 ft_lstdel \
			 ft_lstadd \
			 ft_lstiter \
			 ft_lstmap \
			 ft_countwords \
			 ft_strrev \
			 ft_itoa_base \
			 ft_iswhitespace \
			 ft_power \
			 ft_numlen_ull \
			 get_next_line \



OBJS = $(patsubst %, $(OBJ_DIR)/%.o, $(OBJ_NAMES))
SRCS = $(patsubst %, $(SRC_DIR)/%.c, $(OBJ_NAMES))

all: $(NAME)

$(NAME) : $(OBJS) 
		ar crs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
		mkdir -p $(OBJ_DIR)
		$(CC) -c -o $@ $< $(FLAGS)
clean:
		rm -rf $(OBJ_DIR)

fclean: clean
		rm -f $(NAME)

re: fclean all
