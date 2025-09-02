/**
 * Platform: LeetCode
 * Problem: 1148. Article Views I
 * Link: https://leetcode.com/problems/article-views-i/
 * Difficulty: Easy
 * Solved: 02-09-2025
 *
 * Approach:
 * - Need authors who viewed their own articles → `author_id = viewer_id`
 * - Used DISTINCT to remove duplicates
 * - Sorted results in ascending order
 *
 * Complexity Analysis:
 * - Time: O(N) [Scan each row once]
 * - Space: O(1) [No extra memory beyond query execution]
 */

SELECT DISTINCT author_id as id
FROM Views
WHERE author_id = viewer_id
ORDER BY author_id;  -- sort