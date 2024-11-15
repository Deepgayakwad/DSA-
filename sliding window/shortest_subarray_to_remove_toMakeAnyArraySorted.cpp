class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
         int n = arr.size();
        int left = 0, right = n - 1;

        // Find the longest non-decreasing prefix
        while (left + 1 < n && arr[left] <= arr[left + 1]) {
            left++;
        }

        // If the entire array is non-decreasing, return 0
        if (left == n - 1) return 0;

        // Find the longest non-decreasing suffix
        while (right > left && arr[right] >= arr[right - 1]) {
            right--;
        }

        // Try removing all elements before the suffix or after the prefix
        int result = min(n - left - 1, right);

        // Try merging the prefix and suffix by removing the subarray in between
        int i = 0, j = right;
        while (i <= left && j < n) {
            if (arr[i] <= arr[j]) {
                result = min(result, j - i - 1);
                i++;
            } else {
                j++;
            }
        }

        return result;
    }
};
