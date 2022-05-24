//
// Created by Manuel Hahn on 5/23/22.
//

#ifndef EX03_IMATERIASOURCE_H
#define EX03_IMATERIASOURCE_H

#include "AMateria.h"
#include <string>

class IMateriaSource {
public:
    virtual ~IMateriaSource() {};
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria * createMateria(const std::string &type) = 0;
};

#endif //EX03_IMATERIASOURCE_H
