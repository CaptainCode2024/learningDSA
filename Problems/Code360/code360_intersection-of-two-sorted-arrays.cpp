/**
 * Platform: Code360
 * Problem: Intersection Of Two Sorted Arrays
 * Link: https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149
 * Difficulty: Easy
 *
 * Approach:
 * - Applied two-pointer traversal on both arrays simultaneously
 * - Collected elements that matched to form the intersection
 *
 * Complexity Analysis:
 * - Time: O(N + M)   [Each array is traversed once]
 * - Space: O(1)      [Only result container is used]
 */

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{

	vector<int> intersect; // intersection

	int i = 0, j = 0;
	
	// iterate
	while(i < n && j < m){
		
		// since vectors are sorted
		
		if(arr1[i] == arr2[j]){
			intersect.push_back(arr1[i]);  // add
			i++; j++;
		}

		else if(arr1[i] < arr2[j]){
			i++;
		}

		else{
			j++;
		}

	}

	return intersect;
}