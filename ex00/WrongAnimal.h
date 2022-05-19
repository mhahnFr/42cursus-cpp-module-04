//
// Created by Manuel Hahn on 5/19/22.
//

#ifndef EX00_WRONGANIMAL_H
#define EX00_WRONGANIMAL_H

#include <string>

class WrongAnimal {
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &);
    virtual ~WrongAnimal();

    virtual void makeSound() const;
    const std::string &getType() const;
    void setType(const std::string &type);

    WrongAnimal & operator=(const WrongAnimal &);

protected:
    std::string type;
};


#endif //EX00_WRONGANIMAL_H
