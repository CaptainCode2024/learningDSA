/**
 * Platform: LeetCode
 * Problem: #1757 [Recyclable and Low Fat Products]
 * Link: https://leetcode.com/problems/recyclable-and-low-fat-products/
 * Difficulty: Easy
 * Solved: 01-09-2025
 *
 * Approach:
 * - Selected `product_id` from Products table
 * - Applied filter with WHERE condition for low_fats = 'Y' and recyclable = 'Y'
 *
 * Complexity Analysis:
 * - Time: O(N)   [Scans all rows once with filter condition]
 * - Space: O(1)  [No extra space, just query result]
 */

SELECT product_id
FROM Products
WHERE low_fats = 'Y' and recyclable = 'Y';