#include <iostream>
using namespace std;

/*
Pattern: -
1
2 3
3 4 5
4 5 6 7
*/ 

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1;

    // for rows
    while (i <= n){
        int j = 1, val = i;
        
        // for columns
        while (j <= i){
            cout<<val<<' ';
            val++; j++;
        }

        cout<<endl;
        i++;
    }

    cout<<"---------------"<<endl;

    int k = 1;

    // for rows
    while (k <= n){
        int l = 1;
        
        // for columns
        while (l <= k){
            cout<<(k+l) -1<<' ';
            l++;
        }

        cout<<endl;
        k++;
    }

    return 0;
}