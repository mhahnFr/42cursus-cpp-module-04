//
// Created by Manuel Hahn on 5/19/22.
//

#ifndef EX00_WRONGCAT_H
#define EX00_WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat &);
    ~WrongCat();

    void makeSound() const;

    WrongCat & operator=(const WrongCat &);
};


#endif //EX00_WRONGCAT_H
