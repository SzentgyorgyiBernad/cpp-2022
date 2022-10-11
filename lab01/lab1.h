//
// Created by Alex on 10/11/2022.
//

#ifndef MAIN_01_CPP_LAB1_H
#define MAIN_01_CPP_LAB1_H

#include "cmath"
#include <utility>
#include <cfloat>
#include <sstream>
#include <cstdlib>
using namespace std;


int countBits(int number);
bool setBit(int& number, int order);
double average(double array[], int numElements);
double stddev(double array[], int numElements);
pair<double, double> max2(double array[], int numElements);
double numSum(const string& text);
int countWords(string text);
string code(string text);
string decode(string text);

#endif //MAIN_01_CPP_LAB1_H
