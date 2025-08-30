/**
 * Platform: Code360
 * Problem: Find Unique
 * Link: https://www.naukri.com/code360/problems/find-unique_625159
 * Difficulty: Easy
 *
 * Approach:
 * - Used XOR property:
 *   → Same numbers cancel out because a ^ a = 0
 *   → XOR of all elements leaves the unique element
 *
 * Complexity Analysis:
 * - Time: O(N)   [Single pass over array]
 * - Space: O(1)  [Only one variable used]
 */

 int findUnique(int *arr, int N) {
    int unique = 0;

    for(int i = 0; i < N; i++){
        unique = unique^arr[i];  // since a^a = 0
    }

    return unique;
}