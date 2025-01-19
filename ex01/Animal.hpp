#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m" 
#define DEFAULT "\033[0m"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& copy);
        virtual void makeSound() const ;
        std::string getType() const ;
        Animal& operator=(const Animal& copy) ;
        virtual ~Animal();
};

#endif