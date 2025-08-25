// Binary To Decimal

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string bin;  // binary string
    cout <<"Enter Binary: "; cin >>bin;
    int length = bin.length();
    
    int decimal = 0;

    for (int i = 0; i < length; i++){
        if (bin[i] == '1'){
            decimal += pow(2, length - i - 1);
        }
    }

    cout <<"Decimal: " <<decimal;

    return 0;
}