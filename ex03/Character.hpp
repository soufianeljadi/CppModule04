
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];

	public:
		Character();
        Character(const std::string &name);
        Character(const Character &copy);
        Character &operator=(const Character &copy);
        ~Character();

        std::string const &getName() const;
        void equip(AMateria * m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif