/**
 * Platform: LeetCode
 * Problem: 1141. User Activity for the Past 30 Days I
 * Link: https://leetcode.com/problems/user-activity-for-the-past-30-days-i/
 * Difficulty: Easy
 * Solved: 04-09-2025
 *
 * Approach:
 * - Filter records to the 30-day window ending 2019-07-27
 * - Group by activity_date
 * - Count distinct user_id per day as active users
 *
 * Complexity Analysis:
 * - Time: O(N)   [One pass with filtering + grouping]
 * - Space: O(1)  [Only aggregates stored, no extra structures]
 */

SELECT activity_date AS day,
       COUNT(DISTINCT user_id) AS active_users
FROM Activity
WHERE activity_date BETWEEN DATE_SUB('2019-07-27', INTERVAL 29 DAY) 
                        AND '2019-07-27'
GROUP BY activity_date;
