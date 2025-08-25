// program to check if a number is prime

#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter x: "; cin>>x;

    int i = 2;
    bool isPrime = 1;
    
    if (x == 1){
        isPrime = 0;
    }
    else {
        while(i < x){
        if (x%i == 0){
            isPrime = 0;
            break;
        }
        
        i++;
        }
    }
    

    if (isPrime == 1){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}