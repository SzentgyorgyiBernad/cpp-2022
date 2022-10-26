//
// Created by Alex on 10/11/2022.
//

#ifndef MAIN_01_CPP_POINT_H
#define MAIN_01_CPP_POINT_H


#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    int x, y;
    static int counter;
public:
    //Konstruktor
    Point( int x=0, int y=0);
    //Getterek
    int getX() const;

    int getY() const;
    //Kiiras
    void print() const;
    double distanceTo(Point& x);
    Point(const Point&);
    ~Point();
    static int getCounter();
};

#endif //MAIN_01_CPP_POINT_H
