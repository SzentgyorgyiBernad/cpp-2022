//
// Created by Alex on 10/5/2022.
//

#include <iostream>
#include "List.h"

List::List() {
    this->first=nullptr;
}

List::~List() {
    if(this->nodeCounter==0) return;

    Node* node=this->first;
    while(node != nullptr)
    {
        Node* temp=node;
        node=node->next;
        delete temp;
        this->nodeCounter--;
    }
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

int List::size() const{
    return this->nodeCounter;
}

bool List::empty() const {
    return this->nodeCounter==0;
}

int List::removeFirst() {
    if(this->first == nullptr){
        return -1;
    }
    this->first=new Node(this->first->next->value,this->first->next->next);
    this->nodeCounter--;
    return 0;
}

void List::remove(int d, List::DeleteFlag df) {
    switch (df) {
        case DeleteFlag::LESS:
            if(this->first->value < d) {
                this->nodeCounter--;
                removeFirst();
                return;
            }
        case DeleteFlag::EQUAL:
            if(this->first->value == d) {
                this->nodeCounter--;
                removeFirst();
                return;
            }
            break;
        case DeleteFlag::GREATER:
            if(this->first->value > d) {
                this->nodeCounter--;
                removeFirst();
                return;
            }
            break;
    }

    Node * actual = this->first;

    while (actual != nullptr) {
        Node* prev = actual;
        actual = actual->next;
        switch (df) {
            case DeleteFlag::LESS:
                if(actual->value < d) {
                    this->nodeCounter--;
                    prev->next = actual->next;
                    delete actual;
                    return;
                }
                break;
            case DeleteFlag::EQUAL:
                if(actual->value == d) {
                    this->nodeCounter--;
                    prev->next = actual->next;
                    delete actual;
                    return;
                }
                break;
            case DeleteFlag::GREATER:
                if(actual->value > d) {
                    this->nodeCounter--;
                    prev->next = actual->next;
                    delete actual;
                    return;
                }
                break;
        }
    }
}