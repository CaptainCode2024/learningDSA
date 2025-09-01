/**
 * Platform: LeetCode
 * Problem: 595. Big Countries
 * Link: https://leetcode.com/problems/big-countries/
 * Difficulty: Easy
 * Solved: 01-09-2025
 *
 * Approach:
 * - Selected countries where `area >= 3000000` OR `population >= 25000000`
 * - Returned only the required fields: name, population, and area
 *
 * Complexity Analysis:
 * - Time: O(N) [Each row is checked once]
 * - Space: O(1) [No extra memory beyond query execution]
 */

SELECT name, population, area
FROM World
WHERE area >= 3000000 OR population >= 25000000;