/**
 * Platform: LeetCode
 * Problem: #231 Power of Two
 * Link: https://leetcode.com/problems/power-of-two/
 * Difficulty: Easy
 * Solved: 10-10-2024
 *
 * Approach:
 * - Handle negative numbers and zero upfront (not powers of two).
 * - For positive numbers, count the number of set bits (1s) in binary form.
 * - If exactly one set bit is present, then it's a power of two.
 *
 * Complexity Analysis:
 * - Time: O(log₁₀(n)) (proportional to number of bits in n)
 * - Space: O(1) (constant variables used)
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {

        // -ve numbers & zero
        if(n <= 0){
            return false;
        }

        // +ve numbers
        else{
            int count = 0;  // no. of 1 bits
            
            while(n != 0){
                int digit = n & 1;
                if(digit == 1){
                    count = count + 1;
                    if(count > 1){
                        return false;
                        break;
                    }
                }
                n = n >> 1; 
            }
            
        }

        return true;  // exactly one 1 bit
    }
};
