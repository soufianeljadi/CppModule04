#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"

class Cat :public Animal
{
    public:
        Cat();
        Cat(const Cat& other);
        Cat &operator=(const Cat& copy) ;
        void makeSound()const;
        std::string getType() const;
        ~Cat();
};

#endif