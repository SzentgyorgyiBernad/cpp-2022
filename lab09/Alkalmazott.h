//
// Created by Alex on 11/16/2022.
//

#ifndef MAIN_01_CPP_ALKALMAZOTT_H
#define MAIN_01_CPP_ALKALMAZOTT_H

#include "Szemely.h"

class Alkalmazott : public Szemely{
protected:
    string munkakor;
    int id;
    static int i;

public:
    Alkalmazott(string vezetekNev,string keresztNev,int szuletesiEv,string munkakor);
    int getId() const;
    virtual void print(ostream &os);

};


#endif //MAIN_01_CPP_ALKALMAZOTT_H
