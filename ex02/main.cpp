
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
    // const AAnimal j ;  // cannot create an instance of an abstract class
    const int arraySize = 6;
    AAnimal *animals[arraySize];


    for (int i = 0; i < arraySize / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = arraySize / 2; i < arraySize; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < arraySize; ++i) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < arraySize; ++i) {
        delete animals[i];
    }

    return 0;
}
