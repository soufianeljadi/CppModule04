CXX = c++
SRC = main.cpp Cat.cpp Dog.cpp AAnimal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Brain

all: $(NAME)

$(NAME): $(OBJ) Cat.hpp Dog.hpp AAnimal.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean  