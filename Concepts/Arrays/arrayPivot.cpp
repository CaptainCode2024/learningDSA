// to find the pivot index in an array
// sum(elements in the left) = sum(elements in the right); of the pivot

#include <iostream>
using namespace std;

int pivot(int arr[], int n) {

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    
    int leftSum = 0, rightSum = total;  // initialize

    for (int i = 0; i < n; i++) {
        rightSum -= arr[i];  // subtract current

        if (leftSum == rightSum) {
            return i;
        }

        leftSum += arr[i];  // add current
    }

    return -1; // no pivot found
}

int main() {

    int testArr[7] = {1, 2, 3, 4, 3, 2, 1};
    cout<< pivot(testArr, 7) <<endl;

    int testArr2[7] = {1, 1, 2, 4, -1, -2, -2};
    cout<< pivot(testArr2, 7) <<endl;

    return 0;
}