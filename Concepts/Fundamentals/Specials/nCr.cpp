// program to compute nCr (binomial coefficient)

#include <iostream>
using namespace std;

int factorial(int x){
    
    if(x == 0){
        return 1;
    }

    else{
        int f = 1;

        for(int i = 1; i <= x; i++){
            f *= i;
        }

        return f;
    }
}

int nCr(int n, int r){

    if (r >= 0 && n >= r){
        int value = factorial(n)/(factorial(r)*factorial(n-r));
        
        return value;
    }

    else{
        cout <<"Invalid Parameters! (-1)" <<endl;
        
        return -1;
    }

    

    
}

int main(){
    int n, r;
    
    cout <<"Enter n: "; cin >>n;
    cout <<"Enter r: "; cin >>r;

    cout <<n <<"C" <<r <<" is " <<nCr(n, r);

    return 0;
}