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
public:
    //Konstruktor
    Point( int x=0, int y=0);
    //Getterek
    int getX() const;

    int getY() const;
    //Kiiras
    void print() const;
};

double distance(const Point& a, const Point& b);
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d);
void testIsSquare(const char * filename);
Point* createArray(int numPoints);
void printArray(Point* points, int numPoints);
pair<Point, Point> closestPoints(Point* points, int numPoints);


#endif //MAIN_01_CPP_POINT_H
