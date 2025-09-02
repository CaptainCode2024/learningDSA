/**
 * Platform: LeetCode
 * Problem: 1683. Invalid Tweets
 * Link: https://leetcode.com/problems/invalid-tweets/
 * Difficulty: Easy
 * Solved: 02-08-2025
 *
 * Approach:
 * - A tweet is invalid if its content length > 15
 * - Used CHAR_LENGTH(content) to count characters (not bytes)
 * - Selected tweet_id where condition is satisfied
 *
 * Complexity Analysis:
 * - Time: O(N) [Each row is scanned once]
 * - Space: O(1) [No extra space used]
 */

SELECT tweet_id
FROM Tweets
WHERE CHAR_LENGTH(content) > 15;