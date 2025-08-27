/**
 * Platform: LeetCode
 * Problem: #1009 Complement of Base 10 Integer
 * Link: https://leetcode.com/problems/complement-of-base-10-integer/
 * Difficulty: Easy
 * Solved: 10-10-2024
 *
 * Approach:
 * - Handle n = 0 as a special case (complement = 1).
 * - Create a mask of all 1’s up to the highest set bit of n.
 * - Use bitwise NOT (~) with the mask to compute complement.
 *
 * Complexity Analysis:
 * - Time: O(log₂(n)) (proportional to number of bits in n).
 * - Space: O(1) (constant extra variables).
 */

class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0){
            return 1;
        }

        else{
            int m = n;  // copy
            int mask = 0;

            while(m != 0){
                mask = (mask << 1) | 1;
                m = m >> 1;
            }

            int complement = ~n & mask;

            return complement;
        }
    }
};
