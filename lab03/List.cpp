//
// Created by Alex on 10/5/2022.
//

#include <iostream>
#include "List.h"

List::List() {
    this->first=nullptr;
}

List::~List() {

    Node* temp=this->first->next;
    while(temp)
    {
        delete this->first;
        this->first=temp;
        temp=temp->next;
    }
    temp=nullptr;
}

void List::insertFirst(int d) {
    Node* newNode=new Node(d,this->first);
    this->first=newNode;
    ++nodeCounter;
}

void List::print() const {
    Node *temp = this->first;
    while (temp)
    {
        std::cout<<temp->value<<", ";
        temp=temp->next;
    }
    temp=nullptr;

}

bool List::exists(int d) const {
    Node* temp=this->first;
    while(temp)
    {
        if(temp->value==d) return true;
    }
    return false;
}
