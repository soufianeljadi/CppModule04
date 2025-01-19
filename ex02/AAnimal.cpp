
#include "AAnimal.hpp"

AAnimal::AAnimal() :type("AAnimal")
{
    std::cout << "AAnimal default constructor called" <<std::endl;
}

AAnimal::AAnimal(const AAnimal& copy) : type(copy.type)
{
    std::cout << "AAnimal copy constructor called." << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal& copy) 
{
    if (this != &copy) 
        type = copy.type;
    std::cout << "AAnimal assignment operator called." << std::endl;
    return *this;
}

void AAnimal::makeSound() const 
{
    std::cout << "AAnimal sound" << std::endl;
}

std::string AAnimal::getType() const 
{
    return this->type;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" <<std::endl;
}