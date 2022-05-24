//
// Created by Manuel Hahn on 5/23/22.
//

#include "Ice.h"
#include <iostream>

AMateria *Ice::clone() const {
    return new Ice();
}

Ice::Ice(): AMateria("ice") {}

Ice::Ice(const Ice &other): AMateria(other) {}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &) {
    // Do nothing here...
    return *this;
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
