//
// Created by Alex on 10/11/2022.
//

#include <cmath>
#include "lab1.h"

int countBits(int number) {
    int sum = 0;
    while(number != 0){
        sum += number & 1;
        number = number >> 1;
    }
    return sum;
}

bool setBit(int& number, int order)
{
    if(order > 31 || order < 0) return false;
    if(order == 0) return true;
    --order;
    number |= 1UL << order;
    return true;
}

double average(double array[], int numElements)
{
    if(numElements == 0) return NAN;
    double sum=0;
    for(int i=0;i<numElements;i++)
    {
        sum+=array[i];
    }
    return sum/numElements;
}

double stddev(double array[], int numElements)
{
    if(numElements == 0) return NAN;
    double ave= average(array,numElements);
    double result, h=0;
    for(int i=0;i<numElements;i++)
    {
        result=(array[i]-ave);
        if(result<0) result*=-1;
        result*=result;
        h+=result;
    }
    h/=numElements;
    return sqrt(h);
}
pair<double, double> max2(double array[], int numElements)
{
    pair<double, double> dupla;
    if(numElements<=0)
    {
        dupla.first=dupla.second=NAN;
        return dupla;
    }
    else if(numElements == 1){
        dupla.first = array[0];
        dupla.second = NAN;
        return dupla;
    }
    dupla.first = dupla.second = -DBL_MIN;
    for(int i=0;i<numElements;i++)
    {
        if(array[i]>dupla.first) dupla.first=array[i];
        else if(array[i] > dupla.second) dupla.second = array[i];
    }
    return dupla;
}
//double numSum(const string& words)
//{
//    istringstream iss(words);
//    double sum=0;
//    string number;
//    while(iss >> number)
//    {
//        if*
//    }
//}

int countWords(string words)
{
    istringstream iss(words);
    string word;
    int count=0;
    while(iss >> word)
    {
        count++;
    }
    return count;
}
string code(string texts)
{
    int i=0;
    while(texts[i]!='\0')
    {
        if((texts[i] >= 65 && texts[i] <=90) || (texts[i] >= 97 && texts[i] <= 122)){
            if(texts[i] == 90 || texts[i] == 122) texts[i] -= 25;
            else texts[i]++;
        }
        i++;
    }
    return texts;
}

string decode(string text) {
    int i=0;
    while(text[i] != '\0'){
        if((text[i] >= 65 && text[i] <=90) || (text[i] >= 97 && text[i] <= 122)){
            if(text[i] == 65 || text[i] == 97) text[i] += 25;
            else text[i]--;
        }
        i++;
    }
    return text;
}

