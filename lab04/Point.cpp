//
// Created by Alex on 10/11/2022.
//

#include <valarray>
#include <fstream>
#include "Point.h"
#include <cmath>
#include <cstdlib>
#define M 2000


Point::Point(int x, int y) {
    if((x>=0 && x<=M) && (y>=0 && y<=M))
    {
        this->x=x;
        this->y=y;
    }
    else
    {

    }
    ++this->counter;

}
int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y;
}

void Point::print() const
{
    cout<<"( "<<getX()<<","<<getY()<<")"<<endl;
}

double Point::distanceTo(Point& a)
{
    return sqrt(pow(this->x-a.getX(),2)+pow(this->y-a.getY(),2));
}

int Point::counter{0};

Point::Point(const Point &point) {
    this->x=point.x;
    this->y=point.y;
    ++this->counter;
}


int Point::getCounter() {
    return counter;
}

Point::~Point() {
    --this->counter;
}


