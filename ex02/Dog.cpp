//
// Created by Manuel Hahn on 5/19/22.
//

#include <iostream>
#include "Dog.h"

Dog::Dog(): AAnimal(), brain(new Brain) {
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other): AAnimal(other), brain(new Brain(*other.getBrain())) {
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destroyed" << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << "Bark bark!" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (&other != this) {
        type = other.getType();
        delete brain;
        brain = new Brain(*other.getBrain());
    }
    return *this;
}

Brain *Dog::getBrain() const {
    return brain;
}
