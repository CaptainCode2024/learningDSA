/**
 * Platform: LeetCode
 * Problem: #852 Peak Index in a Mountain Array
 * Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
 * Difficulty: Medium
 * Solved: 27-08-2025
 *
 * Approach:
 * - Applied binary search to find the peak
 * - Compared mid with mid+1 to decide whether to move left or right
 *
 * Complexity Analysis:
 * - Time: O(log N)   [Each step halves the search space]
 * - Space: O(1)      [Only constant extra variables used]
 */

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        // using binary search - log(n)
        int n = arr.size();

        int start = 0, end = n - 1;
        int mid = start + (end - start) / 2;

        while (start < end) {
            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }

            mid = start + (end - start) / 2; // update
        }

        return start;  // peak
    }
};