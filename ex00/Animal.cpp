//
// Created by Manuel Hahn on 5/19/22.
//

#include "Animal.h"
#include <iostream>

Animal::Animal(): type() {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other): type(other.getType()) {
    std::cout << "Animal " << type << " copy constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal " << type << " destroyed" << std::endl;
}

const std::string &Animal::getType() const {
    return type;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "Animal " << type << " assignment operator called" << std::endl;
    type = other.getType();
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal " << type << " cannot make sound!" << std::endl;
}

void Animal::setType(const std::string &type) {
    Animal::type = type;
}
