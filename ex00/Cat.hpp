#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"

class Cat :public Animal
{
    public:
        Cat();
        void makeSound();
        std::string getType() const;
        ~Cat();
};

#endif