# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mlokhors <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/22 11:58:38 by mlokhors      #+#    #+#                  #
#    Updated: 2019/03/22 12:07:56 by mlokhors      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
FLAGS=-Werror -Wextra -Wall
SRC=
OBJECT=
HEAD=./includes

all: $(NAME)

$(NAME):
		$(CC) -c $(FLAGS) $(SRC) -I$(HEAD)
		ar rc $@ $(OBJECT)
		ranlib $(NAME)

clean:
		rm -f $(OBJECT)

fclean: clean
		rm -f $(NAME)

re: fclean all
