/**
 * Platform: Code360
 * Problem: Search In Rotated Sorted Array
 * Link: https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554
 * Difficulty: Easy
 * Solved: 30-08-2025
 *
 * Approach:
 * - First find the pivot (smallest element index) using binary search
 * - Decide which half to search (before or after pivot)
 * - Perform binary search on the chosen sorted half
 *
 * Complexity Analysis:
 * - Time: O(log N)   [Binary search for pivot + one binary search for target]
 * - Space: O(1)      [Constant extra variables]
 */

// optimized approach

int binarySearch(vector<int>& arr, int start, int end, int k) {

    // int start = 0, end = n - 1;
    int mid = start + (end -start) / 2;

    while (start <= end) {

        if (k == arr[mid]) {  // match
            return mid;
        }
        else if (k > arr[mid]) {  // search in right
            start = mid + 1;
        }
        else {  // search in left
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;  // element absent
}


int findPivot(vector<int>& arr, int n) {

    int start = 0, end = n - 1;
    int mid = start + (end -start) / 2;

    while (start < end) {
        
        if (arr[mid] >= arr[end]) {  // mid in 1st sorted half
            start = mid + 1;
        }
        else {  // mid in 2nd sorted half
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}


int search(vector<int>& arr, int n, int k) {
    
    int start = 0, end = n - 1;

    int pivot = findPivot(arr, n);
    
    if (pivot != 0) {  // rotated array
        if (k >= arr[pivot] && k <= arr[end]) {
            return binarySearch(arr, pivot, end, k);
        }
        else {
            return binarySearch(arr, start, pivot - 1, k);
        }
    }
    else {  // no rotation
        return binarySearch(arr, start, end, k);
    }
    
}