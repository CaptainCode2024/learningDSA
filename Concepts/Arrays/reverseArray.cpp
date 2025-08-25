// program to reverse an array

#include <iostream>
using namespace std;

void printArray(int arr[], int n){  // n - size of array or no. of elements to be printed

    for(int i = 0; i < n; i++){
        cout <<arr[i] <<" ";
    }

    cout <<endl;
}

void reverseArray(int arr[], int n){

    int start = 0, end = n - 1;  // initial start & end indices

    while(start < end){
        swap(arr[start], arr[end]);
        start++; end--;
    }
}

int main(){
    
    // test array
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout <<"Before: ";
    printArray(array, 8);

    reverseArray(array, 8);
    cout <<"After: ";
    printArray(array, 8);


    return 0;
}