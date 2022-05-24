//
// Created by Manuel Hahn on 5/23/22.
//

#ifndef EX03_CURE_H
#define EX03_CURE_H


#include "AMateria.h"

class Cure : public AMateria {
public:
    Cure();
    Cure(const Cure &);
    ~Cure();

    AMateria *clone() const;

    void use(ICharacter &target);

    Cure & operator=(const Cure &);
};


#endif //EX03_CURE_H
