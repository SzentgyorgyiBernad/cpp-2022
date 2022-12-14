//
// Created by Alex on 11/16/2022.
//

#include "Manager.h"

const string Manager::MANAGER_MUNKAKOR="Manager";

Manager::Manager(string vezetekNev, string keresztNev, int szuletesiEv, string munkakor) :
Alkalmazott(vezetekNev,keresztNev,szuletesiEv,munkakor) {

}

void Manager::print(ostream &out) {
    out<<"Manager "<<this->id<<" "<<this->vezetekNev<<" "<< this->keresztNev<<" beosztottjai:\n";
    for (int j=0;j<alkalmazottak.end();j++) {

    }

}

void Manager::addAlkmazott(const Alkalmazott &alkalmazott) {


}


