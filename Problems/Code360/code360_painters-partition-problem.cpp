/**
 * Platform: Code360
 * Problem: Painter's Partition Problem
 * Link: https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557
 * Difficulty: Moderate
 * Solved: 08-09-2025
 *
 * Approach:
 * - Use Binary Search on answer (minimum time required)
 * - For each mid, check if partitioning into ≤ k painters is possible
 * - Narrow down search space until optimal minimum time is found
 *
 * Complexity Analysis:
 * - Time: O(N * log(sum(arr)))   [Binary search with partition check]
 * - Space: O(1)                  [Only variables used for simulation]
 */

bool partitionPossible(vector<int> &boards, int n, int k, int mid) {
    int boardLengthPainted = 0;
    int painters = 1;  // minimum & default

    for (int i = 0; i <n; i++) {
        
        if (boardLengthPainted + boards[i] <= mid) {
            boardLengthPainted += boards[i];  // for each painter
        }
        else {
            painters++;  // shifting to next painter

            if (boards[i] > mid || painters > k) {
                return false;
            }

            boardLengthPainted = boards[i];  // reset
        }
    }
    
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int time = 0;  // length of board = time required
    
    // k <= n but even if k > n the solution holds
    
    int n = boards.size();  // n(boards)
    int total = 0;  // total length of boards
    int maxBoard = boards[0];  // max element - min possible time 
    for (int i = 0; i < n; i++) {
        total += boards[i];
        if (boards[i] > maxBoard) maxBoard = boards[i];
    }
    
    int start = maxBoard, end = total;  // solution space - binary search
    int mid = start + (end- start) / 2;
    
    while (start <= end) {
        
        if (partitionPossible(boards, n, k, mid)) {
            end = mid - 1;
            time = mid; 
        }
        else {
            // partition is not possible
            start = mid + 1;
        }

        mid = start + (end- start) / 2;  // update
    }

    return time;  // answer
}