#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::IMateriaSource(const IMateriaSource& copy)
{
    *this = copy;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource& copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++)
        {
            this->materia[i] = copy.materia[i];
        }
    }
    return *this;
}

IMateriaSource::~IMateriaSource()
{
}

void IMateriaSource::learnMateria(AMateria* m)
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

AMateria* IMateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] != NULL && this->materia[i]->getType() == type)
        {
            return this->materia[i]->clone();
        }
    }
    return NULL;
}
