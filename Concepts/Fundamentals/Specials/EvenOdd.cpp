// funcytion to fnd if a number is even or odd

#include <iostream>
using namespace std;
#include <string> // for string manipulation

// using bitwise operator
string EvenOdd(int n){
    
    // lsb is 0 for an even number (... 2^0 * 0)
    if(n & 1 == 0){
        return "Even";
    }
    else{
        return "Odd";
    }
}


int main(){

    int x;
    cout <<"Enter the value of x: "; cin >>x;
    cout <<x <<" is " <<EvenOdd(x) <<endl; 

    return 0;
}