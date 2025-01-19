#include "Ice.hpp"
#define "Ice.hpp"

#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor called" <<std::endl;
}   

Ice::~Ice()
{
    std::cout << "Ice destructor called" <<std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
    std::cout << "Ice copy constructor called." << std::endl;
}

Ice& Ice::operator=(const Ice& copy)
{
    if (this != &copy)
        AMateria::operator=(copy);
    std::cout << "Ice assignment operator called." << std::endl;
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

#endif