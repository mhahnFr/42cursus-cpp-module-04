//
// Created by Manuel Hahn on 5/19/22.
//

#ifndef EX03_AMATERIA_H
#define EX03_AMATERIA_H

#include <string>
#include "ICharacter.h"

class AMateria {
public:
    AMateria();
    AMateria(const AMateria &);
    AMateria(const std::string & type);
    virtual ~AMateria();

    const std::string & getType() const;

    virtual AMateria * clone() const = 0;
    virtual void use(ICharacter & target);

    AMateria & operator=(const AMateria &);

protected:
    std::string type;
};


#endif //EX03_AMATERIA_H
