#include <iostream>
#include "Polynomial.h"

int main() {
    Polynomial a(3,new double[4] {1,2,6,9});
    cout << a<<endl;

    Polynomial b(2,new double[3] {2,3,6});
    cout<< b<<endl;
    cout<<a+b<<endl;
    cout<< a-b<<endl;
    cout<< b-a<<endl;
    return 0;
}