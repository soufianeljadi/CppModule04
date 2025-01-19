#include "Brain.hpp"

Brain::Brain() 
{
    std::cout <<YELLOW "Brain default constructor called" DEFAULT<< std::endl;
}

Brain::Brain(const Brain &other) 
{
    for (int i = 0; i < 100; ++i) 
    {
        ideas[i] = other.ideas[i];
    }
    std::cout <<YELLOW "Brain copy constructor called." DEFAULT<< std::endl;
}

Brain &Brain::operator=(const Brain &other) 
{
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
               ideas[i] = other.ideas[i];
        }
    }
    std::cout <<YELLOW "Brain assignment operator called." DEFAULT<< std::endl;
    return *this;
}

Brain::~Brain() 
{
    std::cout <<YELLOW "Brain destructor called" DEFAULT<< std::endl;
}