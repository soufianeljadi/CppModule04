
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure& copy);

        Cure &operator=(const Cure& copy);
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
        
        virtual ~Cure();
};


#endif