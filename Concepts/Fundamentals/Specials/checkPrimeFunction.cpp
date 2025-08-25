// program to check if a number is primeF using function

#include <iostream>
using namespace std;

// function to check if prime
bool isPrime(int x){
    
    bool primeFlag = 1;
    
    if (x == 1){
        primeFlag = 0;
    } else {
        for(int i = 2; i < x; i++){
            if (x%i == 0){
                primeFlag = 0;
                break;
            }
        }
    }

    return primeFlag;
}

// driver
int main(){
    int x;
    cout<<"Enter x: "; cin>>x;

    bool primeFlag = isPrime(x);

    if (primeFlag == 1){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}