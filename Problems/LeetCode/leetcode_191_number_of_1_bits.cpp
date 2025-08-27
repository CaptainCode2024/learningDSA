/**
 * Platform: LeetCode
 * Problem: #191 Number of 1 Bits
 * Link: https://leetcode.com/problems/number-of-1-bits/
 * Difficulty: Easy
 * Solved: 05-10-2024
 *
 * Approach:
 * - Iterate over all 32 bits of the integer.
 * - Use bitwise AND with 1 to check the least significant bit, then right-shift.
 * - Count the number of set bits (1s).
 *
 * Complexity Analysis:
 * - Time: O(32) = O(1)   (fixed number of bits in integer)
 * - Space: O(1)          (constant extra space)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    
    int hammingWeight(int n) {

        int count = 0;  // No. of set bits

        for(int i = 0; i < sizeof(n)*8; i++){
            
            // lsb
            if(n & 1 == 1){
                count++;
            }
            
            n = n >> 1;  // update
        }

        return count;
    }
};
