#include <iostream>
using namespace std;

/*
Pattern: -
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/ 

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1;

    // for rows
    while (i <= n){
        
        // part 1
        int j = 1;
        while (j <= (n-i)+1){
            cout<<j<<' ';
            j++;
        }

        // part 2
        int k = (i-1)*2;
        while (k){
            cout<<'*'<<' ';
            k--;
        }

        // part 3
        int l = (n-i)+1;
        while (l){
            cout<<l<<' ';
            l--;
        }

        cout<<endl;
        i++;
    }

    return 0;
}