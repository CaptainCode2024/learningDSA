// program to compute power(a,b)

#include <iostream>
using namespace std;

 // function to calculate power

 int power(int a, int b){
    
    int value = 1;

    for(int i = 1; i <= b; i++){
        value *= a;
    }

    return value;

 }

// driver
 int main(){

    int a, b;
    cout <<"Enter a: "; cin >>a;
    cout <<"Enter b: "; cin >>b;

    int ans = power(a,b);
    cout <<a <<" ^ " <<b <<" = " <<ans <<endl;
    
    return 0;
 }