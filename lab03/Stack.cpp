//
// Created by Alex on 10/11/2022.
//

#include <iostream>
#include "Stack.h"

void Stack::push(int e) {
    this->list.insertFirst(e);
}

int Stack::pop() {
    if(this->isEmpty())
    {
        std::cout<<"The stack is empty"<<std::endl;
    }
    return 0;
}

bool Stack::isEmpty() const {
    return this->list.empty();
}
