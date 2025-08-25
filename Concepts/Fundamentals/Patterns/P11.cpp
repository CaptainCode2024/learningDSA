#include <iostream>
using namespace std;

/*
Pattern: -
A 
B B
C C C
*/ 

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1; char c = 'A';

    // for rows
    while (i <= n){
        int j = 1;

        // for columns
        while (j <= i){
            cout<<c<<' ';
            j++;
        }

        cout<<endl;
        i++; c++;
    }

    return 0;
}