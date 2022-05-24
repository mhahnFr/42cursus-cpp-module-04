//
// Created by Manuel Hahn on 5/23/22.
//

#include "Cure.h"
#include <iostream>

AMateria *Cure::clone() const {
    return new Cure();
}

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure &other): AMateria(other) {}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &) {
    // Do nothing here...
    return *this;
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
