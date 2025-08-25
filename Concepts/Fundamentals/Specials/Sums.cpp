// program to find the sum of first n natural numbers, even & odd numbers b/w 1-n

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "; cin>>n;

    int sum, evenSum, oddSum, i, j, k;
    sum = evenSum = oddSum = 0;

    i = 1;
    while (i<=n){
        sum = sum + i;
        i = i + 1;
    }
    cout<<"Sum: "<<sum<<endl;

    j = 2;
    while (j<=n){
        evenSum = evenSum + j;
        j = j + 2;
    }
    cout<<"Even Sum: "<<evenSum<<endl;

    k = 1;
    while (k<=n){
        oddSum = oddSum + k;
        k = k + 2;
    }
    cout<<"Odd Sum: "<<oddSum<<endl;

    return 0;
}