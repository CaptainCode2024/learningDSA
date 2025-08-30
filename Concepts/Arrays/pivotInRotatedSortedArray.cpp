// program to find the pivot index in a rotated sorted array
// pivot - point at which rotation or break occurs in a sorted array - smallest element

#include <iostream>
using namespace std;

// arr - sorted & rotated

int pivotIndex(int arr[], int n) {

    int start = 0, end = n -1;
    int mid = start + (end - start) / 2;

    while (start < end) {

        // debug
        cout <<"Debug: -" <<" start: " <<start <<" mid: " <<mid <<" end: " <<end <<endl;

        if (arr[mid] >= arr[end]) {
            start = mid + 1;
        }
        else {  // arr[mid] < arr[0] -> if mid is present in the 2nd sorted part  
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}

int main() {

    int testArr[7] = {4, 5, 6, 7, 1, 2, 3};
    int pivot = pivotIndex(testArr, 7);
    cout <<"Pivot: " <<pivot <<" Pivot Element: " <<testArr[pivot] <<endl;

    int testArr2[5] = {1, 2, 3, 4, 5};
    int pivot2 = pivotIndex(testArr2, 5);
    cout <<"Pivot: " <<pivot2 <<" Pivot Element: " <<testArr2[pivot2] <<endl;
    
    return 0;
}

// binary search - works on monotonic functions
// pivot == 0 => sorted array & no rotation (edge case)
// O(log(n))