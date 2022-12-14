//
// Created by Alex on 11/23/2022.
//

#ifndef MAIN_01_CPP_ORDEREDLIST_H
#define MAIN_01_CPP_ORDEREDLIST_H

#include <iostream>
#include <functional>

using namespace std;
// Class declaration


template <class T, class LessComp = less<T>, class Equal = equal_to<T> >

class OrderedList{
private:
    struct Node {
        T value;
        Node* next;
        Node(T t,Node* node):value(t),next(node){}
    };

    Node* first;
    int numElemenets;

public:
    OrderedList();
    ~OrderedList();
    bool isEmpty();
    void insert(T&);
    void remove(T&);
    int size();
    bool find(T&) const;
    void listItems(ostream&);
};

template<class T, class LessComp, class Equal>
OrderedList<T, LessComp, Equal>::OrderedList() {
    first=nullptr;
    numElemenets=0;
}

template<class T, class LessComp, class Equal>
OrderedList<T, LessComp, Equal>::~OrderedList() {
    Node* temp=first;
    while(temp)
    {
        delete first;
        first=temp->next;
    }
    temp= nullptr;
    this->first= nullptr;
}

template<class T, class LessComp, class Equal>
bool OrderedList<T, LessComp, Equal>::isEmpty() {
    return 0==this->numElemenets;
}

template<class T, class LessComp, class Equal>
int OrderedList<T, LessComp, Equal>::size() {
    return this->numElemenets;
}

template<class T, class LessComp, class Equal>
void OrderedList<T, LessComp, Equal>::listItems(ostream &os) {
    Node* temp= this->first;
    while (this->first)
    {
        os << temp->value << ' ';
        temp=temp->next;
    }
    temp= nullptr;
    os << endl;
}

template<class T, class LessComp, class Equal>
void OrderedList<T, LessComp, Equal>::insert(T &t) {
    Node* newNode=new Node(t, nullptr);
    if(this->isEmpty())
    {
        this->first=newNode;
        ++this->numElemenets;
        return;
    }

    else if( 1== this->numElemenets)
    {
        if(LessComp()(this->first->value,t))
        {
            Node* temp=this->first;
            this->first=newNode;
            this->first->next=temp;
        }


        ++this->numElemenets;
        return;
    }

    Node* tempFirst= this->first;
    Node* tempSecond= this->first->next;
    while (tempSecond && (tempSecond->value < t))
    {
        tempFirst=tempSecond;
        tempSecond=tempSecond->next;
    }

    tempFirst->next==newNode;
    if(tempSecond)
    {
        newNode->next=tempSecond;
    }




}


#endif //MAIN_01_CPP_ORDEREDLIST_H
