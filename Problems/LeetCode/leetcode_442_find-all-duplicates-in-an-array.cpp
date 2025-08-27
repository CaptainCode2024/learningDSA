/**
 * Platform: LeetCode
 * Problem: #442 Find All Duplicates in an Array
 * Link: https://leetcode.com/problems/find-all-duplicates-in-an-array/
 * Difficulty: Medium
 * Solved: 07-06-2025
 *
 * Approach:
 * - Use index marking by negating values to track visited numbers.
 * - If already negative, number is duplicate; else, mark as visited.
 *
 * Complexity Analysis:
 * - Time: O(n)   (single pass over array)
 * - Space: O(1)  (ignoring output storage)
 */

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();  // array length
        vector<int> res;

        for (int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1;

            if (nums[idx] < 0)
                res.push_back(abs(nums[i]));  // duplicate
            else
                nums[idx] = -nums[idx];       // mark as visited
        }

        return res;
    }
};

