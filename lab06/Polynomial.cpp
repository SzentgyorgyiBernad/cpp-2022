//
// Created by Alex on 10/26/2022.
//

#include <ntdef.h>
#include "Polynomial.h"

Polynomial::Polynomial(int degree, const double *coefficients) {
    this->capacity=degree+1;
    this->coefficients=new double[capacity];
    for (int i = 0; i < this->capacity; ++i) {
        this->coefficients[i]=coefficients[i];
    }
}

Polynomial::Polynomial(const Polynomial &that) {
    this->capacity=that.capacity;
    this->coefficients=new double[that.capacity];
    for (int i = 0; i < this->capacity; ++i) {
        this->coefficients[i]=that.coefficients[i];
    }
}

Polynomial::Polynomial(Polynomial &&that) {
    this->capacity=that.capacity;
    this->coefficients=that.coefficients;

    that.capacity=0;
    that.coefficients=nullptr;
}

Polynomial::~Polynomial() {
    this->capacity=0;
    delete []this->coefficients;
}

int Polynomial::degree() const {
    return this->capacity-1;
}

Polynomial Polynomial::derivative() const {
    Polynomial derivPoly(this->capacity-1,this->coefficients);
    int kitevo=this->capacity-1;
    for (int i = 0; i < this->capacity - 1; ++i) {
        derivPoly.coefficients[i] *= kitevo--;
    }
    return derivPoly;
}

double Polynomial::operator[](int index) const {
    return this->coefficients[index];
}

Polynomial operator-(const Polynomial &a) {
    Polynomial negalPoly(a);
    for (int i = 0; i < negalPoly.capacity; ++i) {
        negalPoly.coefficients[i] *= -1;
    }
    return negalPoly;
}

Polynomial operator+(const Polynomial &a, const Polynomial &b) {
    if(a.capacity > b.capacity)
    {
        Polynomial osszegPoly(a);
        for (int i = 0; i < b.capacity; ++i) {
            osszegPoly.coefficients[i+a.capacity-b.capacity] += b.coefficients[i];
        }
        return osszegPoly;
    }

    Polynomial osszegPoly(b);
    for (int i = 0; i < a.capacity; ++i) {
        osszegPoly.coefficients[i+b.capacity-a.capacity] += a.coefficients[i];
    }
    return osszegPoly;
}

ostream &operator<<(ostream &out, const Polynomial &what) {
    for (int i = 0; i < what.capacity; ++i) {
        if(what.capacity-i-1 == 0)
        {
            out << what.coefficients[i]<<endl;
        }
        else
        {
            out << what.coefficients[i] << "*X^" << what.capacity-i-1<<" + ";
        }

    }
    return out;
}

Polynomial operator-(const Polynomial &a, const Polynomial &b) {

//    Polynomial kulonbsegPoly(a);
//    for (int i = 0; i < b.capacity; ++i) {
//        kulonbsegPoly.coefficients[i+a.capacity-b.capacity] -= b.coefficients[i];
//    }
//    return  kulonbsegPoly;

    Polynomial negaltB(-b);
    return a+ negaltB;
}


