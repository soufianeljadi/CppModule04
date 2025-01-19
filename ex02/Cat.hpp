#ifndef Cat_HPP
# define Cat_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat :public AAnimal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat& other);
        Cat &operator=(const Cat& copy) ;
        void makeSound()const;
        std::string getType() const;
        ~Cat();
};

#endif