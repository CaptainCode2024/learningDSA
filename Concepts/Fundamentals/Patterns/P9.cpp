#include <iostream>
using namespace std;

/*
Pattern: -
A A A
B B B
C C C
*/ 

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1;

    char c = 'A';

    // for rows
    while (i <= n){
        int j = 1;

        // for columns
        while (j <= n){
            cout<<c<<' ';
            j++;
        }

        cout<<endl;
        c++; i++;
    }

    return 0;
}