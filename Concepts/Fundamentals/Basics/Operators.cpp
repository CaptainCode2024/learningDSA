#include <iostream>
using namespace std;

int main(){
    // checking divide operator '/'

    cout<<4/2<<endl;  // 2 (int)
    cout<<2/4<<endl;  // 0 (int) - not 0.5
    cout<<2.0/4<<endl;  // 0.5 (float)
    cout<<5/2<<endl;  // 2 (int) - not 2.5
    cout<<5/2.0<<endl;  // 2.5 (float)

    float r = 5/2;  
    cout<<r<<endl;  // r = 2 (not 2.5)

    cout<<"-------------------------"<<endl;

    // relational opearators
    int x = 3, y = 5;
    cout<<(x == y)<<endl;  // 0
    cout<<(x != y)<<endl;  // 1
    cout<<(x > y)<<endl;  // 0
    cout<<(x >= y)<<endl;  // 0
    cout<<(x < y)<<endl;  // 1
    cout<<(x <= y)<<endl;  // 1

    return 0;
}