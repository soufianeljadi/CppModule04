#include "ICharacter.hpp"

ICharacter::ICharacter()
{
}

ICharacter::ICharacter(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->materia[i] = NULL;
    }
}

ICharacter::ICharacter(const ICharacter& copy)
{
    *this = copy;
}

ICharacter &ICharacter::operator=(const ICharacter& copy)
{
    if (this != &copy)
    {
        this->name = copy.name;
        for (int i = 0; i < 4; i++)
        {
            this->materia[i] = copy.materia[i];
        }
    }
    return *this;
}

ICharacter::~ICharacter()
{
}

std::string const & ICharacter::getName() const
{
    return this->name;
}

void ICharacter::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] == NULL)
        {
            this->materia[i] = m;
            break;
        }
    }
}

void ICharacter::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->materia[idx] = NULL;
    }
}

void ICharacter::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
    {
        this->materia[idx]->use(target);
    }
}

