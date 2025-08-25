#include <iostream>
using namespace std;

/*
Pattern: -
   * 
  **
 ***
****
*/ 

int main(){
    
    int n;
    cout<<"Enter no. of rows: "; cin>>n;

    int i = 1;

    // for rows
    while (i <= n){
        int j = 1;

        // print spaces : (n-i) times
        while (j <= (n-i)){
            cout<<' ';
            j++;
        }
        // print stars : i times
        while (j <= n){
            cout<<'*';
            j++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}