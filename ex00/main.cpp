//
// Created by Manuel Hahn on 5/19/22.
//

#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main() {
    {
        const Animal *dog = new Dog();
        const Animal *cat = new Cat();
        const Animal *generic = new Animal();

        std::cout << "Dog's type:     " << dog->getType() << std::endl
                  << "Cat's type:     " << cat->getType() << std::endl
                  << "Generic's type: " << generic->getType() << std::endl;

        dog->makeSound();
        cat->makeSound();
        generic->makeSound();
        delete dog;
        delete cat;
        delete generic;
    }
    {
        const WrongAnimal * generic = new WrongAnimal();
        const WrongAnimal * cat = new WrongCat();

        std::cout << "WrongCat's type:    " << cat->getType() << std::endl
                  << "WrongAnimal's type: " << generic->getType() << std::endl;

        cat->makeSound();
        generic->makeSound();

        delete cat;
        delete generic;
    }
}
