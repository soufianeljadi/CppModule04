#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m" 
#define DEFAULT "\033[0m"

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal& copy);
        virtual void makeSound() const = 0;
        std::string getType() const ;
        AAnimal& operator=(const AAnimal& copy) ;
        virtual ~AAnimal();
};

#endif