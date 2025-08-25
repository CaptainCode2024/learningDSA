// program to calculate the sum of an array

#include <iostream>
using namespace std;

int ArraySum(int arr[], int n){  // n - size of array or no. of elements to be added

    int sum = 0;  // initial

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return sum;
}


int main(){

    int array1[] = {1, 2, 3, 4, 5};
    cout<<ArraySum(array1, 5) <<endl;

    return 0;
}