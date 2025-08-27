/**
 * Platform: Code360
 * Problem: Pair Sum
 * Link: https://www.naukri.com/code360/problems/pair-sum_697295
 * Difficulty: Easy
 *
 * Approach:
 * - Checked all possible pairs using nested loops
 * - Collected valid pairs, sorted each, then sorted final list
 *
 * Complexity Analysis:
 * - Time: O(N^2 + K log K)   [N^2 for pair generation, K log K for sorting results]
 * - Space: O(K)              [K = number of valid pairs stored]
 */

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   
   // Brute Force

   vector <vector <int>> pairs;  // output

   // 1st element
   for(int i = 0; i < arr.size(); i++){
      // 2nd element
      for (int j = i+1; j < arr.size(); j++){
         
         // check
         if((arr[i] + arr[j]) == s){

            vector <int> temp;
            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));

            pairs.push_back(temp);
            
         }
      }
   }

   // sort (non-decreasing)
   sort(pairs.begin(), pairs.end());

   return pairs;

}