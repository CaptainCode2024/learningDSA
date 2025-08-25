#include <iostream>
using namespace std;

/*
Pattern: -
1234
1234
1234
1234
*/

/*
Pattern: -
4321
4321
4321
4321
*/

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1; // row number

    // 1st pattern
    
    // for rows
    while (i <= n){
        int j = 1;  // column number
        
        // for columns
        while (j <= n){
            cout<<j;
            j++;
        }

        cout<<endl;
        i++;
    }

    cout<<"---------------"<<endl;

    // 2nd pattern
    
    int k = 1;  // row number

    // for rows
    while (k <= n){
        int l = 1;  // column number
        
        // for columns
        while (l <= n){
            cout<<(n-l+1);
            l++;
        }

        cout<<endl;
        k++;
    }
    
    return 0;
}