#include <iostream>
using namespace std;

/*
Pattern: -
*
**
***
*/ 

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1;

    // for rows
    while (i <= n){
        int j = 1;
        
        // for columns
        while (j <= i){
            cout<<'*'<<' ';
            j++;
        }

        cout<<endl;
        i++;
    }
    
    return 0;
}