// program to calculate the nth term of a given A.P

#include <iostream>
using namespace std;

int an(int n){
    
    int term = 3*n + 7;

    return term;
}

int main(){
    int n;
    
    cout <<"Enter n: "; cin >>n;

    cout <<"nth term: " <<an(n) <<endl;

    return 0;
}