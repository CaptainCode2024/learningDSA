#include <iostream>
using namespace std;

int main(){

    cout<<"Comparing 2 numbers: -" <<endl;
    int a, b;
    cout<<"Enter the values of a & b: "; cin >>a >>b;

    if(a>=b){
        cout <<a <<" is greater." <<endl;
    }
    else{
        cout <<b <<" is greater." <<endl;
    }

    cout <<"-------------------------" <<endl;
    // ----------------------------------------------------------------
    

    cout<<"Checking if a number is +ve/-ve: -" <<endl;
    int x;
    cout<<"Enter the value of x: "; cin >>x;

    if(x > 0){
        cout <<"+ve" <<endl;
    }
    else if(x == 0){
        cout<< "0" <<endl;
    }
    else{
        cout <<"-ve" <<endl;
    }

    cout <<"-------------------------" <<endl;
    // ----------------------------------------------------------------


    int n = 5, i = 1;
    while(i<=n){
        cout<<i<<' ';
        i = i + 1;
    }
    cout<<endl;
    
    cout <<"-------------------------" <<endl;
    // ----------------------------------------------------------------

    cout<<"Program to find sum of n numbers: -"<<endl;
    int N = 10, sum = 0, j = 1;
    while(j<=N){
        sum = sum + j;
        j = j + 1;
    }
    cout<<sum<<endl;
    
    cout <<"-------------------------" <<endl;
    // ----------------------------------------------------------------




    return 0;
}

