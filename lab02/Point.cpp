//
// Created by Alex on 10/11/2022.
//

#include <valarray>
#include <fstream>
#include "Point.h"
#include <cmath>
#include <cstdlib>


Point::Point(int x, int y) {
    if (x >= 0 && x <= 2000 && y >= 0 && y <= 2000){
        this->x = x;
        this->y = y;
    }
    else{
        this->x = 0;
        this->y = 0;
    }
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

double distance(const Point& a, const Point& b)
{
    double h=0;
    h=sqrt((b.getX()-a.getX())*(b.getX()-a.getX())+(b.getY()-a.getY())*(b.getY()-a.getY()));
    //cout<<"Az ("<<a.getX()<<","<<a.getY()<<") es ("<<b.getX()<<","<<b.getY()<<") pontok tavolsaga:"<<h<<endl;
}

bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d)
{
    if(distance(a,c)!= distance(b,d) && distance(a, b) == distance(c, d)) return false;
    if(distance(a,b)!= distance(c,d) && distance(a, c) == distance(b, d)) return false;
    if(distance(a,d)!= distance(b,c) && distance(a, d) == distance(b, c)) return false;
    return true;
}

void testIsSquare(const char * filename)
{
    ifstream f;
    f.open(filename);
    int n;
    f>>n;
    int s1,s2;
    for(int i=0;i<n;i++)
    {
        f>>s1;
        f>>s2;
        Point a(s1,s2);
        f>>s1;
        f>>s2;
        Point b(s1,s2);
        f>>s1;
        f>>s2;
        Point c(s1,s2);
        f>>s1;
        f>>s2;
        Point d(s1,s2);
        a.print();
        b.print();
        c.print();
        d.print();
        if(isSquare(a,b,c,d))
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}

Point* createArray(int numPoints)
{
    int p1,p2;
    Point * points = new Point[numPoints];
    for(int i=0;i<numPoints;i++)
    {
        p1=0+rand()%2000;
        p2=0+rand()%2000;
        points[i]= Point(p1,p2);
    }
    return points;
}
void printArray(Point* points, int numPoints)
{
    for(int i=0;i<numPoints;i++)
    {
        points[i].print();
    }
}

pair<Point, Point> closestPoints(Point* points, int numPoints)
{
    pair<Point,Point> ponts;
    double d= distance(points[0],points[1]);
    Point a,b;
    for(int i=0;i<numPoints;i++)
    {
        for(int j=0;j<numPoints;j++)
        {
            if(distance(points[i],points[j])<d)
            {
                d= distance(points[i],points[j]);
                ponts.first=points[i];
                ponts.second=points[j];
            }
        }
    }
    return ponts;

}
