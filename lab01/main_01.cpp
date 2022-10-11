#include <iostream>
#include "lab1.h"
#include "../lab03/List.h"


int main() {

    cout << "Feladat 1.\n";
    for (int i = 0; i < 128; ++i) {
        cout << countBits(i) << "\n";
    }

    cout << "\nFeladat 2.\n";
    for (int i = 0; i < 35; ++i) {
        int n = 0;
        if(setBit(n, i)){
            cout << i << " ---> " << n << endl;
        }else{
            cout << "Impossible operation!" << endl;
        }
    }

    cout << "\nFeladat 3.\n";
    double array[6];
    for(int i=0;i<6;i++)
    {
        cin >> array[i];
    }
    cout << "Average: "<<average(array,6);

    cout << "\nFeladat 4\n";
    cout << stddev(array, 5);

    cout << "\nFeladat 5\n";
    pair<double, double> dupla = max2(array,5);
    cout << dupla.first << " " << dupla.second;

    //Stringes feladatok
    cout << "\nFeladat 1\n";
    istringstream iss("1 2 3 alma 4");
    double number;
    while(iss >> number){
        cout<<number<<endl;
    }


    cout << "\nFeladat 2\n";
    cout <<"Number of words: "<< countWords("1 2 3 4 5 6 7  8 9");

    cout << "\nFeladat 3\n";
    string texts= code("abz yt ABZ");
    cout<<"Coded text:"<<texts<<endl;
    cout<<decode(texts)<<endl;


    return 0;
}
