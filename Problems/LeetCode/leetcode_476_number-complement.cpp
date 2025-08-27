/**
 * Platform: LeetCode
 * Problem: #476 Number Complement
 * Link: https://leetcode.com/problems/number-complement/
 * Difficulty: Easy
 * Solved: 10-10-2024
 *
 * Approach:
 * - Copy the number to find its bit length.
 * - Build a mask of 1s for that length.
 * - Use bitwise NOT and mask to calculate complement.
 *
 * Complexity Analysis:
 * - Time: O(log₁₀(n)) (proportional to number of bits in n)
 * - Space: O(1) (only constant variables used)
 */

class Solution {
public:
    int findComplement(int num) {
    
        if(num == 0){
            return 1;
        }

        else{
            int m = num;  // copy
            int mask = 0;

            while(m != 0){
                mask = (mask << 1) | 1;
                m = m >> 1;
            }

            int complement = ~num & mask;

            return complement;
        }
    }
};
