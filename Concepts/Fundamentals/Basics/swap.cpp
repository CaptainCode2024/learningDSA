// function to swap 2 variables

#include <iostream>
using namespace std;

// using pointer parameters
void swapInt(int* x, int* y){

    int temp = *x;
    *x = *y; *y = temp;
}

int main(){

    int a = 2, b = 3;
    swapInt(&a, &b);  // address is required

    cout <<a <<" " <<b <<endl;

    return 0;
}