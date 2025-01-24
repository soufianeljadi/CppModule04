
#include "AMateria.hpp"

AMateria::AMateria() : type("default")
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "AMateria Parametrized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : type(copy.type)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* Default use of " << this->type << " on " << target.getName() << " *" << std::endl;
}
