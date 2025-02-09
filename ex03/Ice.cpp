
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
	std::cout << "Ice Copy assignment operator called" << std::endl;
	if (this != &copy)
        AMateria::operator=(copy);
    return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

void Ice::use(ICharacter &target)
{
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}
