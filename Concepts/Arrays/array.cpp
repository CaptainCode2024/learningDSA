// learning arrays

#include <iostream>
using namespace std;

int main(){

    // declaration
    int numbers[10];  // an array of size 10, uninitialized - contains garbage values

    // initialization during declaration
    int array1[5] = {0}; // all elements are initialized to 0
    int array2[5] = {1}; // first element is initialized to 1, rest to 0
    int array3[3] = {1, 2, 3};  // all elements are intialized in order

    // to initialize all elements with the same value (any) and after declaration
    int array4[7];
    fill(array4, array4 + 7, 3);  // fill(array_name, array_name + size, value)
    int array5[7];
    fill_n(array5, 7, 3);  // fill_n(array_name, size, value)
    // to initialize a specific no. of elements from the start, using no. in place of size
    

    for(int n : array5){
        cout <<n <<" ";
    }

    cout <<endl;

    int array6[5] = {1, 2};  // uninitialized elements become 0
    for(int n : array6){
        cout <<n <<" ";
    }
    cout<<endl;

    int array7[] = {1, 2, 3};  // an integer array of size 3, size is not specified in the brackets
    
    int array8[3];  // not initialized - garbage values
    int array9[3] = {0};  // initialized to 0

    for(int n : array9){
        cout<<n <<" ";
    }

    cout<<endl;

    return 0;
}