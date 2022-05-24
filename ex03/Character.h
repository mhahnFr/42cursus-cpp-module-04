//
// Created by Manuel Hahn on 5/23/22.
//

#ifndef EX03_CHARACTER_H
#define EX03_CHARACTER_H


#include "ICharacter.h"
#include "AMateria.h"

class Character : public ICharacter {
public:
    Character();
    Character(const std::string &name);
    Character(const Character &);
    ~Character();

    const std::string &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);

    Character & operator=(const Character &);

private:
    const std::string name;
    AMateria *inventory[4];
};


#endif //EX03_CHARACTER_H
