//
// Created by Manuel Hahn on 5/19/22.
//

#ifndef EX00_ANIMAL_H
#define EX00_ANIMAL_H

#include <string>

class AAnimal {
public:
    AAnimal();
    AAnimal(const AAnimal &);
    virtual ~AAnimal();

    virtual void makeSound() const = 0;
    const std::string &getType() const;
    void setType(const std::string &type);

    AAnimal & operator=(const AAnimal &);

protected:
    std::string type;
};


#endif //EX00_ANIMAL_H
