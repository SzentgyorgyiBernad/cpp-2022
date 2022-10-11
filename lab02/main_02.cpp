#include <iostream>
#include <ctime>
using namespace std;
#include "Point.h"

int main() {
    srand(time(NULL));
    cout << "Hello, World!" <<endl;
    Point p1(0,3);
    cout<<"p1( "<<p1.getX()<<","<<p1.getY()<<")"<<endl;
    Point p2(3, 3);
    cout<<"p2( "<<p2.getX()<<","<<p2.getY()<<")"<<endl;
    Point * pp1 = new Point(300, 400);
    Point * pp2 = new Point(500, 1000);
    cout<<"pp1( "<<pp1->getX()<<","<<pp1->getY()<<")"<<endl;
    cout<<"pp2( "<<pp2->getX()<<","<<pp2->getY()<<")"<<endl;
    delete pp1;
    delete pp2;

    //Feladat 4
    distance(p1,p2);
    //6. Feladat
    cout<<"\n6. Feladat\n";
    testIsSquare("bemenet.txt");

    cout<<"\n7. Feladat\n";
    cout<<createArray(5);
    cout<<"\n8. Feladat\n";
    printArray(createArray(5),5);
    cout<<"\n9. Feladat\n";
    pair<Point,Point> p= closestPoints(createArray(10),10);
    p.first.print();
    p.second.print();

    return 0;
}
