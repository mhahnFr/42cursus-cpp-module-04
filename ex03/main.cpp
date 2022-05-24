//
// Created by Manuel Hahn on 5/19/22.
//

#include "IMateriaSource.h"
#include "MateriaSource.h"
#include "Ice.h"
#include "Cure.h"
#include "Character.h"

void main2();

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

    main2();
    return 0;
}

void main2() {
    IMateriaSource * src = new MateriaSource();
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    AMateria * tmp = new Ice();
    src->learnMateria(tmp);
    delete tmp;

    ICharacter* me = new Character("a");
    ICharacter* bob = new Character("b");
    me->equip(src->createMateria("ice"));
    AMateria* cure = src->createMateria("cure");
    me->equip(cure);
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("ice"));
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(1);
    me->equip(tmp);
    delete cure;

    me->use(4, *bob);
    me->use(3, *bob);
    me->use(2, *bob);
    me->use(1, *bob);
    me->use(0, *bob);
    me->use(-1, *bob);

    * dynamic_cast<Character *>(bob) = * dynamic_cast<Character *>(me);

    me->use(2, *bob);

    delete me;
    delete bob;
    delete src;
}
