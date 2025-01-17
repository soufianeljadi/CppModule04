
#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" <<std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy) 
{
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog& copy) 
{
    if (this != &copy) 
        Animal::operator=(copy);
    std::cout << "Dog assignment operator called." << std::endl;
    return *this;
}

void Dog::makeSound() const
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