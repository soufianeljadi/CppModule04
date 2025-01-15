#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog :public Animal
{
    public:
        Dog();
        void makeSound();
        std::string getType() const;
        ~Dog();
};

#endif