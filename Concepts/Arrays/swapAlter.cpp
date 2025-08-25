// program to swap consecutive elements in an array, alternately

#include <iostream>
using namespace std;

void printArray(int arr[], int n){  // n - size of array or no. of elements to be printed

    for(int i = 0; i < n; i++){
        cout <<arr[i] <<" ";
    }

    cout <<endl;
}


void swapAlter(int arr[], int n){

    for(int i = 0; i < n; i += 2){
        if(i < n-1){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    
    int array[6] = {1, 2, 3, 4, 5, 6};
    printArray(array, 6);

    swapAlter(array, 6);
    printArray(array, 6);

    return 0;
}  