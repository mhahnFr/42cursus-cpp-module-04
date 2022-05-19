//
// Created by Manuel Hahn on 5/19/22.
//

#include "AAnimal.h"
#include "Dog.h"
#include "Cat.h"

#define COUNT 10

int main() {
    AAnimal * animals[COUNT];

    int i;
    for (i = 0; i < COUNT / 2; i++) {
        animals[i] = new Dog();
        std::string *ideas = const_cast<std::string *>(dynamic_cast<Dog *>(animals[i])->getBrain()->getIdeas());
        for (int j = 0; j < 100; j++) {
            ideas[j] = "Idea: Dog " + std::to_string(i) + ", idea " + std::to_string(j);
        }
    }
    for (; i < COUNT; i++) {
        animals[i] = new Cat();
        std::string *ideas = const_cast<std::string *>(dynamic_cast<Cat *>(animals[i])->getBrain()->getIdeas());
        for (int j = 0; j < 100; j++) {
            ideas[j] = "Idea: Cat " + std::to_string(i) + ", idea " + std::to_string(j);
        }
    }

    int j;
    for (j = 0; j < COUNT / 2; j++) {
        dynamic_cast<Dog *>(animals[j])->getBrain()->printIdeas();
    }
    for (; j < COUNT; j++) {
        dynamic_cast<Cat *>(animals[j])->getBrain()->printIdeas();
    }

    AAnimal *a = new Dog(*dynamic_cast<Dog*>(animals[2]));
    Dog * aDog = dynamic_cast<Dog*>(a);
    aDog->getBrain()->printIdeas();
    assert(a != animals[2]);
    assert(aDog != animals[2]);
    assert(aDog->getBrain() != dynamic_cast<Dog *>(animals[2])->getBrain());

    //AAnimal aAnimal = new AAnimal();              <-------- This is the proof for the exercise

    while (i --> 0) {
        delete animals[i];
    }
}
