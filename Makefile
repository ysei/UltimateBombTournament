SRC=		main.cpp

OBJ=		$(SRC:.cpp=.o)

NAME=		ubt

FLAGLIB=	-lsfml-graphics -lsfml-window -lsfml-system -lGL -ljpeg
FLAGERR=	-Wall -Werror -Wextra

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ) $(FLAGERR) $(FLAGLIB)

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
