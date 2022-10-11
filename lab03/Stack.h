//
// Created by Alex on 10/11/2022.
//

#ifndef MAIN_01_CPP_STACK_H
#define MAIN_01_CPP_STACK_H

#include "List.h"

class Stack {
private:
    List list;
private:
    void push(int e);
    int pop();
    bool isEmpty() const;
};



#endif //MAIN_01_CPP_STACK_H
