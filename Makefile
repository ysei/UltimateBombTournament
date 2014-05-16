SRC=		main.cpp	\
		Map.cpp		\
		Cube.cpp	\
		Shader.cpp

OBJ=		$(SRC:.cpp=.o)

NAME=		ubt

FLAGLIB=	-lSDL2 -lGL -lGLU
FLAGERR=	-Wall -Werror -Wextra

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ) $(FLAGERR) $(FLAGLIB)

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
