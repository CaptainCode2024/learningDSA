/**
 * Platform: Code360
 * Problem: First and Last Position of an Element In Sorted Array
 * Link: https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
 * Difficulty: Easy
 * Solved: 27-08-2025
 *
 * Approach:
 * - Run two iterative binary searches: one biased left to find the first index, one biased right for the last
 * - On a match, continue searching the respective half to tighten the boundary
 *
 * Complexity Analysis:
 * - Time: O(log N)   [Each binary search is logarithmic; two searches keep it O(log N)]
 * - Space: O(1)      [Only a few variables; no extra data structures]
 */

 #include <bits/stdc++.h>

// iterative approach - binary search

int firstPosition(vector<int>& arr, int n, int k) {

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

    return firstPos;
}

int lastPosition(vector<int>& arr, int n, int k) {

    int start = 0, end = n - 1;
    int lastPos = -1;  // default - initialize
    int mid = start + (end - start) / 2;

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

    return lastPos;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {

    pair<int,int> result;

    result.first = firstPosition(arr, n, k);
    result.second = lastPosition(arr, n, k);

    return result;
}