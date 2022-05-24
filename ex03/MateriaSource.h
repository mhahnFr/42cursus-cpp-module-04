//
// Created by Manuel Hahn on 5/23/22.
//

#ifndef EX03_MATERIASOURCE_H
#define EX03_MATERIASOURCE_H


#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource {
public:
    MateriaSource();
    MateriaSource(const MateriaSource &);
    ~MateriaSource();

    void learnMateria(AMateria *materia);
    AMateria *createMateria(const std::string &type);

    MateriaSource & operator=(const MateriaSource &);

private:
    std::string names[4];
    AMateria * materias[4];
};


#endif //EX03_MATERIASOURCE_H
