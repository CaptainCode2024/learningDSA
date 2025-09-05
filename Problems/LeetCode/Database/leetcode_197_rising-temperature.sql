/**
 * Platform: LeetCode
 * Problem: 197. Rising Temperature
 * Link: https://leetcode.com/problems/rising-temperature/
 * Difficulty: Easy
 * Solved: 05-09-2025
 *
 * Approach:
 * - Perform a self join of Weather table
 * - Match today's recordDate with yesterday's using DATE_ADD
 * - Filter where today's temperature > yesterday's
 *
 * Complexity Analysis:
 * - Time: O(N)   [Each row compared once through join condition]
 * - Space: O(1)  [No extra structures, just joins]
 */

SELECT w1.id
FROM Weather w1  -- today's
JOIN Weather w2  -- yesterday's
  ON w1.recordDate = DATE_ADD(w2.recordDate, INTERVAL 1 DAY) 
WHERE w1.temperature > w2.temperature;