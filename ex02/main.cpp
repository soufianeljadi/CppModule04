
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
    // const AAnimal j ;  // cannot create an instance of an abstract class
    // Create an array of AAnimal pointers
    const int arraySize = 6;
    AAnimal *animals[arraySize];

    // Fill the array with Dogs and Cats
    for (int i = 0; i < arraySize / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = arraySize / 2; i < arraySize; ++i) {
        animals[i] = new Cat();
    }

    // Make each animal produce its sound
    for (int i = 0; i < arraySize; ++i) {
        animals[i]->makeSound();
    }

    // Delete each animal to clean up memory
    for (int i = 0; i < arraySize; ++i) {
        delete animals[i];
    }

    return 0;
}
