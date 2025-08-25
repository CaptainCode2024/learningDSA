#include <iostream>
using namespace std;

/*
Pattern: -
123
456
789
*/ 

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1, count = 1;

    // for rows
    while (i <= n){
        int j = 1;
        
        // for columns
        while (j <= n){
            cout<<count<<' ';
            count++; j++;
        }

        cout<<endl;
        i++;
    }
    
    return 0;
}