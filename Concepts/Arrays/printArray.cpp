// program to print an array

#include <iostream>
using namespace std;

// function to print the array
void printArray(int arr[], int n){  // n - size of array or no. of elements to be printed

    for(int i = 0; i < n; i++){
        cout <<arr[i] <<" ";
    }

    cout <<endl;
}


int main(){

    int array1[] = {1, 2, 3, 4, 5};
    printArray(array1, 5);


    int array2[7] = {1, 2};
    printArray(array2, 7);

    // sizeof operator
    int size = sizeof(array2)/sizeof(array2[0]);  // to calculate the size of an array
    cout <<size <<endl;

    return 0;
}