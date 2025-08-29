// program to find the minimum and maximum element in an array

#include <iostream>
using namespace std;

// function to print the array
void printArray(int arr[], int n){  // n - size of array or no. of elements to be printed

    for(int i = 0; i < n; i++){
        cout <<arr[i] <<" ";
    }

    cout <<endl;
}

// when an array is passed to a function, it is the actual address, not a copy
int MinOfArray(int arr[], int n){

    int min = arr[0];  // consider 1st element to be min
    for(int i = 1; i <n; i++){
        
        if(arr[i] < min){
            min = arr[i];
        }

        // min(a, b) - predefined function
    }

    return min;
}

int MaxOfArray(int arr[], int n){

    int max = arr[0];  // consider 1st element to be max
    for(int i = 1; i <n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}


int main(){

    // int array[size]; - not a good practice, to use variable size for static allocation
    // since, array size should be known at compile-time, in static allocation


    // create an array
    int array[100];

    int size;
    cout <<"Enter the size: "; cin >>size;

    for (int i = 0; i <size; i++){
        cout <<"Enter element: ";
        cin >>array[i];
    }

    printArray(array, size);
    cout <<"Minimum: " <<MinOfArray(array, size) <<endl;
    cout <<"Maximum: " <<MaxOfArray(array, size) <<endl;

    return 0;
}

