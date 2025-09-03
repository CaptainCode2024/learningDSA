/**
 * Platform: LeetCode
 * Problem: 1378. Replace Employee ID With The Unique Identifier
 * Link: https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/
 * Difficulty: Easy
 * Solved: 03-09-2025
 *
 * Approach:
 * - Use LEFT JOIN between Employees and EmployeeUNI on `id`
 * - Ensures all employees are included, even if no unique_id exists
 * - If no match is found, `unique_id` will be null
 *
 * Complexity Analysis:
 * - Time: O(N)   [Scans Employees and joins with EmployeeUNI]
 * - Space: O(1)  [No extra storage required]
 */

SELECT u.unique_id, e.name
FROM Employees e
LEFT JOIN EmployeeUNI u
ON e.id = u.id;
