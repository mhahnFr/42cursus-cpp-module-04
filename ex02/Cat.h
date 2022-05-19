//
// Created by Manuel Hahn on 5/19/22.
//

#ifndef EX00_CAT_H
#define EX00_CAT_H

#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal {
public:
    Cat();
    Cat(const Cat &);
    ~Cat();

    void makeSound() const;
    Brain *getBrain() const;
    Cat & operator=(const Cat &);

private:
    Brain* brain;
};


#endif //EX00_CAT_H
