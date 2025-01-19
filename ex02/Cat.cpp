
#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << GREEN "Cat default constructor called" DEFAULT<<std::endl;
}

Cat::Cat(const Cat& copy) : AAnimal(copy) 
{
    std::cout << GREEN "Cat copy constructor called." DEFAULT<< std::endl;
}

Cat &Cat::operator=(const Cat& copy) 
{
    if (this != &copy)
        AAnimal::operator=(copy);
    std::cout << GREEN "Cat assignment operator called." DEFAULT<< std::endl;
    return *this;
}

void Cat::makeSound()const
{
    std::cout << GREEN "Meow Meow" DEFAULT<<std::endl;
}

std::string Cat::getType() const
{
    return(this->type);
}

Cat::~Cat()
{
    delete brain;
    std::cout << GREEN "Cat destructor called" DEFAULT<<std::endl;
}