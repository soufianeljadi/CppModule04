CXX = c++
SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Polymorphism

all: $(NAME)

$(NAME): $(OBJ) Cat.hpp Dog.hpp Animal.hpp 
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean  