// implementing binary search

#include <iostream>
using namespace std;

// n = size, k = key
int binarySearch(int arr[], int n, int k){
    
    // iterative approach
    // assumption: sorted in ascending order

    int start = 0, end = n-1;  // initial
    // int mid = (start + end) / 2;  // unsafe (int overflow error) - if start & end are near to INT_MAX

    int mid = start + (end - start)/2;  // safe

    while(start <= end){

        if(k == arr[mid]){
            return mid;
        }
        else if(k > arr[mid]){
            // search in right
            start = mid + 1;  // update 
        }
        else{
            // search in left
            end = mid - 1;  // update
        }

        mid = start + (end - start)/2;  // update
    }

    return -1;  // element absent
    

}

int main(){

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    
    cout <<binarySearch(even, 6, 122) <<endl;
    cout <<binarySearch(odd, 5, 11) <<endl;


    return 0;
}