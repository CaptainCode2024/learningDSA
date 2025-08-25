// Decimal to Binary 

#include <iostream>
using namespace std;

int main(){

    int n;
    cout <<"Enter Decimal: "; cin >>n;

    string bin = "";  // binary representation
    int size = sizeof(n)*8;  // size in bits 

    // +ve or 0
    if (n >= 0){
        for(int i = 0; i < size; i++){
            int bit = n & 1; // extract lsb
            bin = to_string(bit) + bin;  // append the bit to the left
            n >>= 1;  // right shift
        }
    }

    // -ve
    else{
        n = static_cast<unsigned int>(n);  // convert to unsigned (2's complement equivalent)
        for (int i = 0; i < size; i++){
            int bit = n & 1;  // extract lsb
            bin = to_string(bit) + bin;  // append bit to the left
            n >>= 1;  // right shift
        }
    }

    cout <<"Binary String: " <<bin <<endl; 

    return 0;
}