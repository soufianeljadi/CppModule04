
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" <<std::endl;
}

void Cat::makeSound()
{
    std::cout << "Meow Meow" <<std::endl;
}

std::string Cat::getType() const
{
    return(this->type);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" <<std::endl;
}