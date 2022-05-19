//
// Created by Manuel Hahn on 5/19/22.
//

#include <iostream>
#include "Cat.h"

Cat::Cat(): AAnimal(), brain(new Brain) {
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other): AAnimal(other), brain(new Brain(*other.getBrain())) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destroyed" << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << "Meow meow" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other) {
        type = other.getType();
        delete brain;
        brain = new Brain(*other.getBrain());
    }
    return *this;
}

Brain *Cat::getBrain() const {
    return brain;
}
