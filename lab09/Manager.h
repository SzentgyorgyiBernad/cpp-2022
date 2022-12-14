//
// Created by Alex on 11/16/2022.
//

#ifndef MAIN_01_CPP_MANAGER_H
#define MAIN_01_CPP_MANAGER_H

#include "Alkalmazott.h"
#include <vector>


class Manager : public Alkalmazott{
protected:
    vector<Alkalmazott*> alkalmazottak;
    static const string MANAGER_MUNKAKOR;
public:
    Manager(string vezetekNev,string keresztNev,int szuletesiEv,string munkakor);

    void addAlkmazott(const Alkalmazott &alkalmazott);

    virtual void print(ostream &out);
};


#endif //MAIN_01_CPP_MANAGER_H
