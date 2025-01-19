#include "Character.hpp"

Character::Character() : name("default")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const Character &c)
{
    *this = c;
}

Character &Character::operator=(const Character &c)
{
    name = c.name;
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
        inventory[i] = c.inventory[i]->clone();
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !inventory[idx])
        return;
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4 || !inventory[idx])
        return;
    inventory[idx]->use(target);
}

