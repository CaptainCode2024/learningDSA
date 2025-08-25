// program to compute the nth fibonacci number

#include <iostream>
using namespace std;

int fibonacci(int n){
    int f = 0, s = 1;  // first & second terms

    if (n < 1){
        cout <<"Invalid Number of Terms!" <<endl;
        return -1;
    }
    else if (n == 1){
        return f;
    }
    else if (n == 2){
        return s;
    } 
    else{
        int t;  // successive term
        
        for (int i = 2; i < n; i++){
            t = f + s;
            f = s; s = t;
        }
        
        return t;
    }
}


int main(){

    int n;
    cout <<"Enter the value of n: "; cin >>n;
    cout <<n  <<"th Fibonacci Number: " <<fibonacci(n) <<endl;

    return 0;
}