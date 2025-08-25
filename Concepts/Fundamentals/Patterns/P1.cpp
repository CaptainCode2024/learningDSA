#include <iostream>
using namespace std;

/*
Pattern: -
****
****
****
****
*/ 

int main(){
    
    int n;
    cout<<"Enter n: "; cin>>n;

    int i = 1;

    while (i <= n){
        int j = 1;
        
        while (j <= n){
            cout<<'*';
            j++;
        }

        cout<<endl;
        i++;
    }
    
    return 0;
}