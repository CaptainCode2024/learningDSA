/**
 * Platform: Code360
 * Problem: Allocate Books
 * Link: https://www.naukri.com/code360/problems/allocate-books_1090540
 * Difficulty: Moderate
 * Solved: 03-09-2025
 *
 * Approach:
 * - Apply binary search on possible answer range [max(arr), sum(arr)]
 * - For each mid value, check if allocation is possible using greedy approach:
 *   - Assign pages sequentially to students
 *   - If pages exceed mid, allocate to next student
 *   - If students needed > m, allocation not possible
 * - Minimize the maximum pages allocated to a student
 *
 * Complexity Analysis:
 * - Time: O(N * log(sum(arr)))   [Binary search with O(N) feasibility check]
 * - Space: O(1)  [Only counters used]
 */

 bool isAllocPossible(vector<int>& arr, int n, int m, int mid) {
    
    int studentCount = 1;  // constraint - minimum
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;

            // check
            if (studentCount > m || arr[i] > mid) {
                return false;
            }

            pageSum = arr[i];  // reset
        }
    }

    return true;
}


int findPages(vector<int>& arr, int n, int m) {
    int ans = -1;  // default

    if (m > n) {
        return ans;  // -1 (allocation impossible)
    }    
    
    // using binary search
    
    // sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int start = 0;  // start
    int end = sum;  // end
    int mid = start + (end - start) / 2;  // mid

    while (start <= end) {
        if (isAllocPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}