//
// Created by Manuel Hahn on 5/19/22.
//

#ifndef EX00_CAT_H
#define EX00_CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    Cat();
    Cat(const Cat &);
    ~Cat();

    void makeSound() const;

    Cat & operator=(const Cat &);
};


#endif //EX00_CAT_H
