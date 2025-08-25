// type casting

#include <iostream>
using namespace std;

int main(){

    int a = 'a';  // implicit type casting, char to int - ascii
    cout<<a <<endl;    

    char c = 65;
    cout<<c <<endl;  // implicit type casting, int to char  - ascii
    
    cout<<int('a') <<endl;  // to find ascii value of any char

    return 0;
}