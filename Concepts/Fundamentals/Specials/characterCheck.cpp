#include <iostream>
using namespace std;

int main(){

    char c;
    cout<<"Enter a character: "; cin>>c;

    cout<<"Character Type: ";
    
    if ('0' <= c && c <= '9'){
        cout<<"Numeric Digit"<<endl;
    }
    else if ('A' <= c && c <= 'Z'){
        cout<<"Uppercase Alphabet"<<endl;
    }
    else if ('a' <= c && c <= 'z'){
        cout<<"Lowercase Alphabet"<<endl;
    }
    else{
        cout<<"Special Character"<<endl;
    }

    return 0;
}