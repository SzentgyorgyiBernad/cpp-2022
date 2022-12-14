//
// Created by Alex on 11/16/2022.
//

#include "Alkalmazott.h"
int i{1};

Alkalmazott::Alkalmazott(string vezetekNev, string keresztNev, int szuletesiEv,string munkakor) : Szemely(vezetekNev, keresztNev,
                                                                                          szuletesiEv) {
    this->munkakor=munkakor;
    this->id=i++;

}

void Alkalmazott::print(ostream &os) {
    Szemely::print(os);
}

int Alkalmazott::getId() const {
    return this->id;
}

