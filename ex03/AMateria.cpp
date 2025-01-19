
#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
    std::cout << "AMateria default constructor called" <<std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria paramitrized constructor called" <<std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" <<std::endl;
}

AMateria::AMateria(const AMateria& copy) : _type(copy._type)
{
    std::cout << "AMateria copy constructor called." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& copy)
{
    if (this != &copy)
        _type = copy._type;
    std::cout << "AMateria assignment operator called." << std::endl;
    return *this;
}

std::string const & AMateria::getType() const
{
    return _type;
}