#ifndef  MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp" 
#include <iostream>

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *source[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &ms);
        MateriaSource &operator=(const MateriaSource &ms);
        ~MateriaSource();

        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
};


#endif