/**
 * Platform: LeetCode
 * Problem: #1207 Unique Number of Occurrences
 * Link: https://leetcode.com/problems/unique-number-of-occurrences/
 * Difficulty: Easy
 * Solved: 05-06-2025
 *
 * Approach:
 * - Count occurrences of each element using a hashmap.
 * - Track seen frequencies using a set.
 * - If any frequency repeats, return false; otherwise true.
 *
 * Complexity Analysis:
 * - Time: O(n) (iterate through array and hashmap)
 * - Space: O(n) (store counts and frequencies)
 */

class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
            unordered_map<int, int> count;  // to store count

            // traverse arr and populate counts
            for(int n : arr){
                    count[n] = count[n] + 1;  // default count = 0
            }

            unordered_set<int> s;

            // populate the set of counts
            for(auto& pair : count){
                s.insert(pair.second);
            }

            // compare sizes
            if(count.size() == s.size()){
                return true;
            }

            return false;

        }
};
