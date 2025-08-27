/**
 * Platform: LeetCode
 * Problem: #7 Reverse Integer
 * Link: https://leetcode.com/problems/reverse-integer/
 * Difficulty: Medium
 * Solved: 09-10-2024
 *
 * Approach:
 * - Extract digits from the number using modulus (%).
 * - Build the reversed number step by step while checking overflow at each step.
 * - Return 0 if the reversed integer overflows 32-bit signed integer range.
 *
 * Complexity Analysis:
 * - Time: O(log₁₀|x|)   (process each digit once)
 * - Space: O(1)         (only constant extra variables used)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int y = 0; // reversed int x

        while(x != 0){
            int digit = x % 10;  // lsd
            
            // out of limits
            if(y > (pow(2, 31) - 1 - digit)/10 || y < -(pow(2, 31) - digit)/10){
                y = 0;
                break;
            }
            else{
                y = y*10 + digit;  // constructing the reversed int
            }
            
            x = x / 10;  // update x
        }

        return y;
    }
};
