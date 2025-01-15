
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" <<std::endl;
}

void Dog::makeSound()
{
    std::cout << "Haw Haw" <<std::endl;
}

std::string Dog::getType() const
{
    return(this->type);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" <<std::endl;
}