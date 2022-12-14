//
// Created by Alex on 11/16/2022.
//

#include "Szemely.h"

Szemely::Szemely(string vezetekNev, string keresztNev, int szuletesiEv) {
    this->vezetekNev=vezetekNev;
    this->keresztNev=keresztNev;
    this->szuletesiEv=szuletesiEv;
}

string Szemely::getVezeteknev() {
    return this->vezetekNev;
}

string Szemely::getKeresztNEv() {
    return this->keresztNev;
}

int Szemely::getSzuletesiEv() {
    return this->szuletesiEv;
}

void Szemely::print(ostream &out)
{
    out<<"Vezeteknev: "<<this->vezetekNev<<" \nKereszztnev: " <<this->keresztNev<<"\nSzuletesi ev: "<<this->szuletesiEv;
}

ostream& operator<<(ostream &os,Szemely szemely1)
{
    os<<szemely1.getVezeteknev()<<szemely1.getKeresztNEv()<<szemely1.getSzuletesiEv();
    return os;
}
