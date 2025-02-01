#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat :public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat& copy);
        Cat &operator=(const Cat& copy) ;
        void makeSound()const;
        std::string getType() const;
        ~Cat();
};

#endif