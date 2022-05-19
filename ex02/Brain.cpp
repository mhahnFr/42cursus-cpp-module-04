//
// Created by Manuel Hahn on 5/19/22.
//

#include <iostream>
#include "Brain.h"

const std::string *Brain::getIdeas() const {
    return ideas;
}

Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        ideas[i] = other.ideas[i];
    }
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Bain assignment operator called" << std::endl;
    if (&other != this) {
        for (int i = 0; i < 100; i++) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

void Brain::printIdeas() const {
    for (int i = 0; i < 100; i++) {
        std::cout << ideas[i] << std::endl;
    }
}
