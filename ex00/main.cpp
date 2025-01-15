
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    std::cout << "--- Correct Animal Hierarchy ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    // std::cout << "\n--- Wrong Animal Hierarchy ---" << std::endl;
    // const WrongAnimal* wrongMeta = new WrongAnimal();
    // const WrongAnimal* wrongCat = new WrongCat();

    // std::cout << wrongCat->getType() << " " << std::endl;

    // wrongCat->makeSound(); // WrongAnimal sound
    // wrongMeta->makeSound(); // WrongAnimal sound

    // delete wrongMeta;
    // delete wrongCat;

    return 0;
}