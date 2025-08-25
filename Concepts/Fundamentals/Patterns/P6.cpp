#include <iostream>
using namespace std;

/*
Pattern: -
1
2 3
4 5 6
*/ 

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1, count = 1;

    // for rows
    while (i <= n){
        int j = 1;
        
        // for columns
        while (j <= i){
            cout<<count<<' ';
            count++; j++;
        }

        cout<<endl;
        i++;
    }
    
    return 0;
}