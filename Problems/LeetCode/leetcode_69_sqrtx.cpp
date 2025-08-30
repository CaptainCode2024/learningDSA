/**
 * Platform: LeetCode
 * Problem: #69 [Sqrt(x)]
 * Link: https://leetcode.com/problems/sqrtx/
 * Difficulty: Easy
 * Solved: 30-08-2025
 *
 * Approach:
 * - Applied binary search in range [0, x] to find integer sqrt
 * - Used `long long` for mid*mid to avoid overflow
 *
 * Complexity Analysis:
 * - Time: O(log N)   [Binary search halves the range each step]
 * - Space: O(1)      [Only a few extra variables used]
 */

 class Solution {
    public:
        int mySqrt(int x) {
            
            // using binary search
            // long long int - 0 <= x <= 2^31 - 1 (avoid overflow)
            
            long long int start = 0, end = x;
            long long int mid = start + (end - start) / 2;

            long long int root;
            long long int square;

            while (start <= end) {

                square = mid * mid;

                if (square == x) {
                    root = mid;
                    break;
                }
                else if (square > x) {
                    end = mid - 1;  // any y >= mid can't be the root 
                }
                else {
                    root = mid;  // might be the root
                    start = mid + 1;
                }

                mid = start + (end - start) / 2;

            }

            return root;
        }
};