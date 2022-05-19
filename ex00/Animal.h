//
// Created by Manuel Hahn on 5/19/22.
//

#ifndef EX00_ANIMAL_H
#define EX00_ANIMAL_H

#include <string>

class Animal {
public:
    Animal();
    Animal(const Animal &);
    virtual ~Animal();

    virtual void makeSound() const;
    const std::string &getType() const;
    void setType(const std::string &type);

    Animal & operator=(const Animal &);

protected:
    std::string type;
};


#endif //EX00_ANIMAL_H
