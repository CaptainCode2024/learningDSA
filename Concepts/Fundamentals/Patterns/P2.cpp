#include <iostream>
using namespace std;

/*
Pattern: -
111
222
333
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
            cout<<i;
            j++;
        }

        cout<<endl;
        i++;
    }
    
    return 0;
}