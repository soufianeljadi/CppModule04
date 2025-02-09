
#include "Character.hpp"

AMateria* Character::unequippedMaterias[100] = {NULL};
int Character::unequippedCount = 0;

Character::Character() : name("default")
{
	std::cout << "Character Default constructor called" << std::endl;
	int i = 0;
	while (i < 4)
	{
		this->inventory[i] = NULL;
		i++;
	}
}

Character::Character(const std::string &name) : name(name)
{
	int i = 0; 
	while (i < 4)
	{
		this->inventory[i] = NULL;
		i++;
	}
	std::cout << "Character Parametrized constructor called" << std::endl;
}

Character::Character(const Character &copy) : name(copy.name)
{
	std::cout << "Character Copy constructor called" << std::endl;
	int i = 0;
	while (i < 4)
	{
		if (copy.inventory[i])
			this->inventory[i] = copy.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
		i++;
	}
}

Character &Character::operator=(const Character &copy)
{
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		int i = 0;
		while (i < 4)
		{
			delete this->inventory[i];
			if (copy.inventory[i])
				this->inventory[i] = copy.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
			i++;
		}
		this->name = copy.name; 
	}
    return (*this);
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
	int i = 0;
	while (i < 4)
	{
		delete this->inventory[i];
		i++;
	}
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
    if (!m) 
        return;

    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == m) 
        {
            delete m;
            return;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m; 
            return;
        }
    }

    delete m; 
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3 && this->inventory[idx])
    {
        if (unequippedCount < 100)
        {
            unequippedMaterias[unequippedCount] = this->inventory[idx];
            unequippedCount++;
        }
        this->inventory[idx] = NULL;
    }
}

void Character::cleanupUnequippedMaterias()
{
    for (int i = 0; i < unequippedCount; ++i)
    {
        delete unequippedMaterias[i];
        unequippedMaterias[i] = NULL;
    }
    unequippedCount = 0;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && this->inventory[idx])
		this->inventory[idx]->use(target);
	return ;
}
