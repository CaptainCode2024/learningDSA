/**
 * Platform: LeetCode
 * Problem: 1581. Customer Who Visited but Did Not Make Any Transactions
 * Link: https://leetcode.com/problems/customer-who-visited-but-did-not-make-any-transactions/
 * Difficulty: Easy
 * Solved: 05-09-2025
 *
 * Approach:
 * - LEFT JOIN Visits with Transactions on visit_id
 * - Filter rows where transaction_id IS NULL (no transactions happened)
 * - Group by customer_id to count such visits per customer
 *
 * Complexity Analysis:
 * - Time: O(N)   [Iterates over Visits with join and grouping]
 * - Space: O(1)  [Only aggregates stored, no extra structures]
 */

SELECT v.customer_id,  -- customer
       COUNT(v.visit_id) AS count_no_trans  -- no. of visits
FROM Visits v
LEFT JOIN Transactions t  -- left join (as all visits are needed)
ON v.visit_id = t.visit_id  -- foreign key
WHERE t.transaction_id IS NUll  -- no transactions
GROUP BY v.customer_id;
