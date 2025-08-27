/**
 * Platform: LeetCode
 * Problem: #504 Base 7
 * Link: https://leetcode.com/problems/base-7/
 * Difficulty: Easy
 * Solved: 09-10-2024
 *
 * Approach:
 * - Handle zero as a special case.
 * - Convert absolute value to base 7 by repeatedly dividing by 7 and prepending digits.
 * - Add negative sign if the original number is negative.
 *
 * Complexity Analysis:
 * - Time: O(log₇(|num|)) (iterates proportional to number of base-7 digits).
 * - Space: O(log₇(|num|)) (string grows with number of base-7 digits).
 */

class Solution {
public:
    string convertToBase7(int num) {

        string num7 = ""; // representation 

        if (num == 0){
            num7 = "0";
        }

        else{
            int x = abs(num);

            while (x != 0){
                int digit = x % 7;  // base 7 lsd
                num7 = to_string(digit) + num7;  // append to the left
                x /= 7;  // update
            }

            if (num < 0){
                num7 = "-" + num7;
            }
        }

        return num7;
                
    }
};
