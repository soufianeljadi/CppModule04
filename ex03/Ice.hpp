
#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
        Ice(const Ice &copy);
        Ice &operator=(const Ice & copy);
        ~Ice();
		
		void use(ICharacter &target);
    	AMateria * clone() const;
};

#endif
