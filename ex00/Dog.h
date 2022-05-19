//
// Created by Manuel Hahn on 5/19/22.
//

#ifndef EX00_DOG_H
#define EX00_DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog();
    Dog(const Dog &);
    ~Dog();

    void makeSound() const;

    Dog & operator=(const Dog &);
};


#endif //EX00_DOG_H
