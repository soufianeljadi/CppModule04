
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"

int main()
{
	std::cout << "Original main function (Provided)...\n";
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    std::cout << "\nTrying to create an unknown Materia...\n";
    IMateriaSource* src2 = new MateriaSource();
    AMateria* unknown = src2->createMateria("fire");
    if (!unknown)
        std::cout << "[SUCCESS] Could not create unknown Materia.\n";

    delete src2;

    std::cout << "\nUsing an invalid Materia slot...\n";
    ICharacter* testChar = new Character("test");
    ICharacter* dummy = new Character("dummy");
	testChar->equip(new Ice());
	testChar->unequip(0);
    testChar->use(0, *dummy);
    testChar->use(5, *dummy);

    delete dummy;
    delete testChar;
    Character::cleanupUnequippedMaterias();
    return 0;
}
