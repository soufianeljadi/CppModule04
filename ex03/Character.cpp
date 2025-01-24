
#include "Character.hpp"

Character::Character() : name("")
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
	std::cout << "Character Parametrized constructor called" << std::endl;
	int i = 0;
	while (i < 4)
	{
		this->inventory[i] = NULL;
		i++;
	}
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
	int i = 0;
	while (i < 4)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	(idx >= 0 && idx <= 3) && (this->inventory[idx] = NULL);
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && this->inventory[idx])
		this->inventory[idx]->use(target);
}
