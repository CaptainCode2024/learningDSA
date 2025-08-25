#include <iostream>
using namespace std;

/*
Pattern: -
D 
C D
B C D
A B C D
*/ 

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1;

    // for rows
    while (i <= n){
        int j = 1; char c = 'A' + n - i;

        // for columns
        while (j <= i){
            cout<<c<<' ';
            j++; c++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}