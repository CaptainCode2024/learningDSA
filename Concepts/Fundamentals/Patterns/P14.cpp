#include <iostream>
using namespace std;

/*
Pattern: -
      1 
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/ 

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1;

    // for rows
    while (i <= n){
        // part 1
        int j = n-i;
        while (j){
            cout<<' '<<' ';
            j--;
        }

        // part 2
        int k = 1;
        while (k <= i){
            cout<<k<<' ';
            k++;
        }

        // part 3
        int l = i-1;
        while (l){
            cout<<l<<' ';
            l--;
        }

        cout<<endl;
        i++;
    }

    return 0;
}