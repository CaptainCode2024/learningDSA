#include <iostream>
using namespace std;

/*
Pattern: -
A B C
B C D
C D E
*/ 

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1;

    // for rows
    while (i <= n){
        int j = 1;

        // for columns
        while (j <= n){
            char val = i+j-2 + 'A';
            cout<<val<<' ';
            j++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}