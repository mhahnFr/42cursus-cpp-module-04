//
// Created by Manuel Hahn on 5/19/22.
//

#include "AAnimal.h"
#include <iostream>

AAnimal::AAnimal(): type() {
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other): type(other.getType()) {
    std::cout << "AAnimal " << type << " copy constructor called" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal " << type << " destroyed" << std::endl;
}

const std::string &AAnimal::getType() const {
    return type;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    std::cout << "AAnimal " << type << " assignment operator called" << std::endl;
    type = other.getType();
    return *this;
}

void AAnimal::makeSound() const {
    std::cout << "AAnimal " << type << " cannot make sound!" << std::endl;
}

void AAnimal::setType(const std::string &type) {
    AAnimal::type = type;
}
