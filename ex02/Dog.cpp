
#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    brain = new Brain();
    std::cout <<RED "Dog default constructor called" DEFAULT<<std::endl;
}

Dog::Dog(const Dog& copy) : AAnimal(copy) 
{
    std::cout <<RED "Dog copy constructor called." DEFAULT<< std::endl;
}

Dog &Dog::operator=(const Dog& copy) 
{
    if (this != &copy) 
        AAnimal::operator=(copy);
    std::cout <<RED "Dog assignment operator called." DEFAULT<< std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout <<RED "Haw Haw" DEFAULT<<std::endl;
}

std::string Dog::getType() const
{
    return(this->type);
}

Dog::~Dog()
{
    delete brain;
    std::cout <<RED "Dog destructor called" DEFAULT<<std::endl;
}