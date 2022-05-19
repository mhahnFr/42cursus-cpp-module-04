//
// Created by Manuel Hahn on 5/19/22.
//

#include "WrongAnimal.h"
#include <iostream>

const std::string &WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::setType(const std::string &type) {
    WrongAnimal::type = type;
}

WrongAnimal::WrongAnimal(): type() {
    std::cout << "Wrong animal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): type(other.getType()) {
    std::cout << "Wrong animal " << type << " copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Wrong animal " << type << " destroyed" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "Wrong sounds!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "WrongAnimal " << type << " assignment operator called" << std::endl;
    type = other.getType();
    return *this;
}
