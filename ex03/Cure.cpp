
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	if (this != &copy)
        AMateria::operator=(copy);
    return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

void Cure::use(ICharacter &target)
{
	if(&target)
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}
