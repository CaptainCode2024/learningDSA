/**
 * Platform: LeetCode
 * Problem: 1068. Product Sales Analysis I
 * Link: https://leetcode.com/problems/product-sales-analysis-i/
 * Difficulty: Easy
 * Solved: 04-09-2025
 *
 * Approach:
 * - Join Sales with Product using product_id
 * - Select product_name, year, price for each sale
 * - No GROUP BY needed since (sale_id, year) is unique
 *
 * Complexity Analysis:
 * - Time: O(N)   [Iterates over Sales with join]
 * - Space: O(1)  [No extra structures, only output]
 */

SELECT p.product_name,
       s.year,
       s.price
FROM Sales s
JOIN Product p
ON s.product_id = p.product_id;