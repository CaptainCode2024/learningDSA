// linear search

#include <iostream>
using namespace std;

// k = key
bool LinearSearch(int arr[], int n, int k){

    for(int i = 0; i < n; i++){
        if (arr[i] == k){
            return true;
        }
    }

    return false;
}

int main(){

    int array[5] = {1, 2, 3, 4, 5};

    int result = LinearSearch(array, 5, 3);

    if (result){
        cout <<"3 is present" <<endl;
    } else{
        cout <<"3 is absent" <<endl;
    }

    return 0;
}