
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
	int i = 0;
	while (i < 4)
	{
		this->learnedAMateria[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	int i = 0;
	while (i < 4)
	{
		if (copy.learnedAMateria[i])
			this->learnedAMateria[i] = copy.learnedAMateria[i]->clone();
		else
			this->learnedAMateria[i] = NULL;
		i++;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		int i = 0;
		while (i < 4)
		{
			delete this->learnedAMateria[i];
			if (copy.learnedAMateria[i])
				this->learnedAMateria[i] = copy.learnedAMateria[i]->clone();
			else
				this->learnedAMateria[i] = NULL;
			i++;
		}
	}
    return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
	int i = 0;
	while (i < 4)
	{
		delete this->learnedAMateria[i];
		i++;
	}
}

void MateriaSource::learnMateria(AMateria *aMateria)
{
    if (!aMateria)
        return;

    for (int i = 0; i < 4; i++)
    {
        if (learnedAMateria[i] == aMateria)
            return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (!learnedAMateria[i])
        {
            learnedAMateria[i] = aMateria;
            return;
        }
    }
    delete aMateria;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < 4)
	{
        if (learnedAMateria[i] && learnedAMateria[i]->getType() == type)
            return (learnedAMateria[i]->clone());
		i++;
	}
	return NULL;
}
