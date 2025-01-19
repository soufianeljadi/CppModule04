
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    delete j;
    delete i;

    const int arraySize = 4;
    Animal *animals[arraySize];
    for (int k = 0; k < arraySize / 2; ++k) {
        animals[k] = new Dog();
    }
    for (int k = arraySize / 2; k < arraySize; ++k) {
        animals[k] = new Cat();
    }

    for (int k = 0; k < arraySize; ++k) {
        animals[k]->makeSound();
    }

    for (int k = 0; k < arraySize; ++k) {
        delete animals[k];
    }
    return 0;
}