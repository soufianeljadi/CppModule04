#ifndef IMateriaSource_HPP
#define IMateriaSource_HPP

#include <iostream>
#include "AMateria.hpp"


class IMateriaSource
{
    public:
        IMateriaSource();
        IMateriaSource(const IMateriaSource& copy);

        IMateriaSource &operator=(const IMateriaSource& copy);
        
        virtual ~IMateriaSource() {}


        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif
