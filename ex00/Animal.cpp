
#include "Animal.hpp"

Animal::Animal() :type("Animal")
{
    std::cout << "Animal default constructor called" <<std::endl;
}

Animal::Animal(const Animal& copy) : type(copy.type)
{
    std::cout << "Animal copy constructor called." << std::endl;
}

Animal &Animal::operator=(const Animal& copy) 
{
    if (this != &copy) 
        type = copy.type;
    std::cout << "Animal assignment operator called." << std::endl;
    return *this;
}

void Animal::makeSound() const 
{
        std::cout << "ana 7ayawan" << std::endl;
}

std::string Animal::getType() const 
{
    return this->type;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" <<std::endl;
}