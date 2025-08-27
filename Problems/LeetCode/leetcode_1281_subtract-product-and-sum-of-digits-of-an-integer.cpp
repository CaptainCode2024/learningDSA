/**
 * Platform: LeetCode
 * Problem: #1281 Subtract the Product and Sum of Digits of an Integer
 * Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
 * Difficulty: Easy
 * Solved: 05-10-2024
 *
 * Approach:
 * - Extract digits using modulus (%) and division (/).
 * - Maintain running product and sum of digits, then return product - sum.
 *
 * Complexity Analysis:
 * - Time: O(log(n))   (loop runs once per digit)
 * - Space: O(1)      (constant extra space)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro = 1, sum = 0;
        
        while (n != 0) {
            int digit = n % 10;
            pro *= digit; 
            sum += digit; 
            n /= 10; 
        }

        return (pro - sum);
    }
};
