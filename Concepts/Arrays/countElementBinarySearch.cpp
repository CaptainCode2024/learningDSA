// program to find the count of an element in a sorted array

#include <iostream>
using namespace std;

// approach: binary search (iterative)

int count(int arr[], int n, int k) {

    int start = 0, end = n - 1;
    int firstPos = -1;  // default - initialize
    int mid = start + (end - start) / 2;

    while (start <= end) {   
        if(k == arr[mid]){
            firstPos = mid;
            end = mid - 1;  // search in left only
        }
        else if (k > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    // reset
    start = 0, end = n - 1;
    int lastPos = -1;  // default - initialize
    mid = start + (end - start) / 2;

    while (start <= end) {   
        if(k == arr[mid]){
            lastPos = mid;
            start = mid + 1;  // search in right only
        }
        else if (k > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return (lastPos - firstPos) + 1;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 4, 5 ,5};
    cout<< count(arr, 8, 3) <<endl;
}