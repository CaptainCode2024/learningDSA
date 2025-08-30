/**
 * Platform: Code360
 * Problem: Duplicate in Array
 * Link: https://www.naukri.com/code360/problems/duplicate-in-array_893397
 * Difficulty: Easy
 *
 * Approach:
 * - Used XOR property
 * - XOR of all array elements with numbers from 1 to N-1 cancels out
 * - Leaves only the duplicate number
 *
 * Complexity Analysis:
 * - Time: O(N)   [Two linear passes: one over array, one from 1 to N-1]
 * - Space: O(1)  [No extra data structures used]
 */

 int findDuplicate(vector<int> &arr) {
    
    int dup = 0;  // duplicate value
    int n = arr.size();

    // xor all elements - removes duplicate
    for(int i = 0; i < n; i++){
        dup = dup ^ arr[i];
    }

    // xor with all the numbers
    for(int i = 1; i < n; i++){
        dup = dup^i; 
    }

    return dup;
}
