##
## EPITECH PROJECT, 2020
## Created by mathieu
## File description:
## makefile
##

SRC	=	src/main.cpp \
		src/Engine.cpp \
		src/Entity.cpp

OBJ	=	$(SRC:.cpp=.o)

FLAG = -g -W -Wall -Wextra

NAME	=	NSEngine

all:	$(NAME)

$(NAME):	$(OBJ)
	g++ -o $(NAME) $(OBJ) $(FLAG)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
