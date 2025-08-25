// program to print first n natural numbers or counting till n

#include <iostream>
using namespace std;

void printNaturalNumbers(int n){

    for(int i = 1; i <= n; i++){
        cout <<i <<' ';
    }
}

int main(){
    int n;
    
    cout <<"Enter n: "; cin >>n;

    printNaturalNumbers(n);
    
    return 0;
}