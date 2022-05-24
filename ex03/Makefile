NAME = game

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp MateriaSource.cpp Character.cpp

HDR = AMateria.h ICharacter.h Ice.h Cure.h IMateriaSource.h MateriaSource.h Character.h

OBJ = $(SRC:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(LDFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HDR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	- $(RM) $(OBJ)

fclean: clean
	- $(RM) $(NAME)

re: fclean
	$(MAKE) all