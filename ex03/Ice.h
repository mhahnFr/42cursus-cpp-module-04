//
// Created by Manuel Hahn on 5/23/22.
//

#ifndef EX03_ICE_H
#define EX03_ICE_H


#include "AMateria.h"

class Ice : public AMateria{
public:
    Ice();
    Ice(const Ice &);
    ~Ice();

    void use(ICharacter &target);

    AMateria *clone() const;

    Ice & operator=(const Ice &);
};


#endif //EX03_ICE_H
