/**
 * Platform: LeetCode
 * Problem: 584. Find Customer Referee
 * Link: https://leetcode.com/problems/find-customer-referee/
 * Difficulty: Easy
 * Solved: 01-09-2025
 *
 * Approach:
 * - Used simple filtering in WHERE clause
 * - Checked for customers whose `referee_id` is NULL or not equal to 2
 *
 * Complexity Analysis:
 * - Time: O(N) [Each row is scanned once]
 * - Space: O(1) [No extra space beyond query execution]
 */

SELECT name
FROM Customer
WHERE 
    referee_id != 2 # referred by any customer with id != 2
OR 
    referee_id IS NULL # not referred by any customer
;