/**
 * Platform: Code360
 * Problem: Sort 0 1
 * Link: https://www.naukri.com/code360/problems/sort-0-1_624379
 * Difficulty: Moderate
 *
 * Approach:
 * - Used two-pointer technique (left and right) to sort in a single scan
 * - Swapped misplaced elements until left and right met
 *
 * Complexity Analysis:
 * - Time: O(N)     [Each element is checked at most once]
 * - Space: O(1)    [In-place sorting, no extra array used]
 */

void sortZeroesAndOne(int input[], int size)
{
    int left = 0, right = size - 1;

    while(left < right){

        if(input[left] == 0){
            left++;
        }
        else if(input[right] == 1){
            right--;
        }
        else{
            swap(input[left], input[right]);
            left++; right--;
        }
    }
}