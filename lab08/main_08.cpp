#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>

using namespace std;


int main() {
    //F1
    cout<<"\n1. Feladat\n";
    vector<string> fruits {
            "melon", "strawberry", "raspberry","apple", "banana", "walnut", "lemon"
    };
    auto found=find_if(fruits.begin(), fruits.end(), [](string &a){return a.find("berry") != -1;} );
    if (found == fruits.end())
    {
    std::cout << "No nuts\n";
    }
    else
    {
    std::cout << "Found " << '\n';
    }

    //F2
    cout<<"\n2. Feladat\n";
    vector<int> array{2,4,6,8,10};
    auto f2 (all_of(array.cbegin(), array.cend(), [](int i){ return i % 2 == 0; }));
    if(f2==0) cout<<"FALSE"<<endl;
    else cout<<"TRUE"<<endl;

    //F3
    cout<<"\n3. Feladat\n";
    vector<int> array2{2,4,6,8,10};
    for_each(array.begin(), array.end(), [](int &a){a*=2;});
    for(int &a:array){cout<< a <<' ';
    }

    //F4
    cout<<"\n\n4. Feladat\n";
    vector<string> months {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
    };
    auto f4= count_if(months.begin(),months.end(), [](string &a){return a.size()==5;});
    cout<<f4<<endl;

    //F5
    cout<<"\n5. Feladat\n";
    vector<int> array3{4,6,2,4,6,1,3,5,7,2,4};
    sort(array3.begin(),array3.end(), [](int &a,int &b){return a>b;});
    for(int &a:array3){cout<< a <<' ';
    }
    cout<<endl<<"F4"<<endl;

    vector<int> array4{4,6,2,4,6,1,3,5,7,2,4};
    sort(array4.begin(),array4.end(), greater<>());
    for(int &a:array4) {cout<<a<<" ";}

    //F6
    cout<<"\n6. Feladat\n";
    vector<pair<string,int>> monthsD {
            {"January",2}, {"February",5}, {"March",12}, {"April",10}, {"May",16}, {"June",25},
            {"July",24}, {"August",30}, {"September",21}, {"October",18}, {"November",10}, {"December",6}
    };
    sort(monthsD.begin(),monthsD.end(), [](pair<string,int> &a,pair<string,int> &b){return a.second<b.second;});
    for(const pair<string,int>& a:monthsD)
    {
        cout<<a.first<<" ("<<a.second<<")"<<endl;
    }


    //F7
    cout<<"\n\n7. Feladat\n";

    vector<int> array7{-4,6,-2,4,6,-1,3,5,-7,2,4};
    sort(array7.begin(),array7.end(), [](int &a,int &b) {return abs(a)<abs(b);});
    for(int &a:array7){cout<< a <<' ';
    }

    //8
    cout<<"\n\n4. Feladat\n";
    vector<string> months8 {
            "January", "february", "March", "April", "May", "june",
            "July", "august", "September", "october", "november", "December"
    };
    for_each(months8.begin(), months8.end(), [](string &a){if((int)a[0]>='a' && (int)a[0]<='z') a[0]-='a'-'A';});
    for(string &a:months8)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    //9
    cout<<"\n9. Feladat\n";
    vector<string> abc {"a","b","c","d","d","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    random_device rd;
    mt19937 g(rd());
    shuffle(abc.begin(),abc.end(),g);


    for(string &a:abc)
    {
        cout<<a<<", ";
    }
    cout<<endl;
    return 0;
}