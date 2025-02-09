
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
        static AMateria* unequippedMaterias[1000]; 
        static int unequippedCount;
	public:
		Character();
        Character(const std::string &name);
        Character(const Character &copy);
        Character &operator=(const Character &copy);
        ~Character();

        std::string const &getName() const;
        void equip(AMateria * m);
        void unequip(int idx);
        static void cleanupUnequippedMaterias();
        void use(int idx, ICharacter &target);
};

#endif