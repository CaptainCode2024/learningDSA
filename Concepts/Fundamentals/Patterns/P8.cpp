#include <iostream>
using namespace std;

/*
Pattern: -
1
2 1
3 2 1
4 3 2 1
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
            cout<<(i-j) + 1<<' ';
            j++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}