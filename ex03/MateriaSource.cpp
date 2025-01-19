#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ms)
{
    *this = ms;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ms)
{
    for (int i = 0; i < 4; i++)
    {
        if (source[i])
            delete source[i];
        source[i] = ms.source[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (source[i])
            delete source[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!source[i])
        {
            source[i] = m;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (source[i] && source[i]->getType() == type)
            return source[i]->clone();
    }
    return NULL;
}

