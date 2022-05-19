//
// Created by Manuel Hahn on 5/19/22.
//

#ifndef EX01_BRAIN_H
#define EX01_BRAIN_H


#include <string>

class Brain {
public:
    Brain();
    Brain(const Brain &);
    ~Brain();

    const std::string * getIdeas() const;
    void printIdeas() const;
    Brain & operator=(const Brain &);

private:
    std::string ideas[100];
};


#endif //EX01_BRAIN_H
