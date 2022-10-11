#include <iostream>
#include "List.h"

int main() {
    std::cout << "Hello, Lab_03" << std::endl;
    List lista1;

    for (int i = 0; i < 15; ++i) {
        lista1.insertFirst(i);
    }

//    if(lista1.empty()){ printf("Yes");}
//    else printf("No");

    std::cout<<"\n";

//    if(lista1.exists(4)){ printf("Yes");}
//    else printf("No");

    lista1.print();

    std::cout<<"\n";
    lista1.removeFirst();
    std::cout<<"The first item it was removed\n";
    lista1.print();
    std::cout<<"\n";

    std::cout<<"Remove the node with 5 value\n";
    lista1.remove(5,List::DeleteFlag::EQUAL);
    lista1.print();

    std::cout<<"\n";

    std::cout << "Remove first node less than 3:\n";
    lista1.remove(8, List::DeleteFlag::LESS);
    lista1.print();

    return 0;
}
