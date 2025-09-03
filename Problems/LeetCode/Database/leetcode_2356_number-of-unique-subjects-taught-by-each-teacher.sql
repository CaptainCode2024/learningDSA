/**
 * Platform: LeetCode
 * Problem: 2356. Number of Unique Subjects Taught by Each Teacher
 * Link: https://leetcode.com/problems/number-of-unique-subjects-taught-by-each-teacher/
 * Difficulty: Easy
 * Solved: 03-09-2025
 *
 * Approach:
 * - Group records by teacher_id
 * - Count distinct subject_id values per teacher
 * - dept_id is irrelevant for this query
 *
 * Complexity Analysis:
 * - Time: O(N)   [One full table scan + grouping]
 * - Space: O(1)  [No extra data structures used]
 */

SELECT teacher_id, COUNT(DISTINCT subject_id) AS cnt
FROM Teacher
GROUP BY teacher_id;
