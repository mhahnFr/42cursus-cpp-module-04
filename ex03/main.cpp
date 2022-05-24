//
// Created by Manuel Hahn on 5/19/22.
//

#include "IMateriaSource.h"
#include "MateriaSource.h"
#include "Ice.h"
#include "Cure.h"
#include "Character.h"

int main() {
    IMateriaSource * src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter * me = new Character("me");
    AMateria * tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter * bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete me;
    delete bob;
    delete src;

    return 0;
}
