
#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
        Cure(const Cure &copy);
        Cure &operator=(const Cure & copy);
        ~Cure();
		
		void use(ICharacter &target);
    	AMateria * clone() const;
};

#endif
