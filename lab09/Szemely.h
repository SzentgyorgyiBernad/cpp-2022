//
// Created by Alex on 11/16/2022.
//

#ifndef MAIN_01_CPP_SZEMELY_H
#define MAIN_01_CPP_SZEMELY_H

#include <iostream>

using namespace std;

class Szemely {
protected:
    string vezetekNev;
    string keresztNev;
    int szuletesiEv;
public:
    Szemely(string vezetekNev,string keresztNev,int szuletesiEv);
    string getVezeteknev();
    string getKeresztNEv();
    int getSzuletesiEv ();
    void print(ostream &out);
};
ostream& operator<<(ostream &os,Szemely szemely1);


#endif //MAIN_01_CPP_SZEMELY_H
