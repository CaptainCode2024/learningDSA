/**
 * Platform: LeetCode
 * Problem: 577. Employee Bonus
 * Link: https://leetcode.com/problems/employee-bonus/
 * Difficulty: Easy
 * Solved: 09-09-2025
 *
 * Approach:
 * - Perform LEFT JOIN between Employee and Bonus tables
 * - Include all employees, even those without a bonus (NULL)
 * - Filter rows where bonus < 1000 or bonus IS NULL
 *
 * Complexity Analysis:
 * - Time: O(N)   [Join and filter across both tables]
 * - Space: O(1)  [No extra storage beyond result set]
 */

SELECT e.name, b.bonus
FROM Employee e
LEFT JOIN Bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000 OR b.bonus IS NULL;
