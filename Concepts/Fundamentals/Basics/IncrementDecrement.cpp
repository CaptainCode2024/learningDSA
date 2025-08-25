#include <iostream>
using namespace std;

int main(){

    
    cout<<"Increment: -"<<endl;
    int a = 1; cout<<"Post: "<< a++ <<endl;
    int b = 1; cout<<"Pre: "<< ++b <<endl;
    
    cout<<"Decrement: -"<<endl;
    int c = 1; cout<<"Post: "<< c-- <<endl;
    int d = 1; cout<<"Pre: "<< --d <<endl;

    return 0;
}