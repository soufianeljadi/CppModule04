#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat() 
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) 
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}


std::string WrongCat::getType() const 
{
    return this->type;
}

void WrongCat::makeSound() const 
{
    std::cout << "Meow! (WrongCat sound)" << std::endl;
}