CXX = c++
SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp IMateriaSource.cpp ICaracter.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Brain

all: $(NAME)

$(NAME): $(OBJ) AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp IMateriaSource.hpp ICaracter.hpp
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean  