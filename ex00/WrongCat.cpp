//
// Created by Manuel Hahn on 5/19/22.
//

#include "WrongCat.h"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal() {
    std::cout << "WrongCat default constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other) {
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Wrong meow!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    type = other.getType();
    return *this;
}
