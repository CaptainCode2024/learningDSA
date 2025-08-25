#include <iostream>
using namespace std;

int main(){

    int a = 2, b = 3;

    cout<<"Bitwise Operations: -"<<endl;
    cout<<"NOT: "<< (~a) <<endl;
    cout<<"AND: "<< (a & b) <<endl;
    cout<<"OR: "<< (a | b) <<endl;
    cout<<"XOR: "<< (a ^ b) <<endl;

    cout <<(10<<2) <<endl;
    cout <<(-10>>1) <<endl;

    return 0;
}