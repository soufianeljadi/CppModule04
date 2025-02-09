
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() 
{
    std::cout << "--- Correct Animal ---" << std::endl;
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    cat->makeSound();
    dog->makeSound();
    animal->makeSound();

    delete animal;
    delete dog;
    delete cat;

    std::cout << "\n--- Wrong Animal ---" << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() <<  std::endl;

    wrongCat->makeSound();
    wrongAnimal->makeSound();

    delete wrongAnimal;
    delete wrongCat;

    return 0;
}