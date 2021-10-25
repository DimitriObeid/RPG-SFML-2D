## MAKEFILE FOR COMPILING THE BASH PARSER

# SOURCING FILES
SRC		=	src/Main.cpp		\
			src/Game.cpp




OBJ		=	$(SRC:.cpp=.o)		# CREATING OBJECT FILES

EXEC	=	RPG					# EXECUTABLE FILE'S NAME

MV		=	mv

GXX		=	g++

RM		=	rm -f

CXXFLAGS	+=	-Werror -Wextra -Wall -I./include

CXXFLAGS	+=	-g

SFML	=	-lstdc++ -lsfml-audio -lsfml-graphics -lsfml-system -lsfml-window

all: $(OBJ)
	$(GXX) -o $(EXEC) $(OBJ) $(CXXFLAGS) $(SFML)

clean:
	$(RM) $(OBJ)

debug:
	$(GXX) $(EXEC) $(CXXFLAGS) $(SRC)

fclean:
	$(RM) $(OBJ)
	$(RM) $(EXEC)

re: fclean all

.PHONY: all clean fclean re
