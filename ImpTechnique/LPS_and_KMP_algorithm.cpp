#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Define the pattern and text
    string pattern = "ababcababc";
    string text = "ababc";

    // Compute the LPS array
    int n = pattern.length();
    vector<int> findLps(n, 0);

    int i = 1, len = 0;
    findLps[0] = 0;  // First LPS value is always 0

    while (i < n) {
        if (pattern[i] == pattern[len]) {
            len++;
            findLps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = findLps[len - 1];
            } else {
                findLps[i] = 0;
                i++;
            }
        }
    }

    // Apply the KMP algorithm
    vector<int> result;  // Store the starting indices of matches
    int m = text.size();
    i = 0;  // Index for pattern
    int j = 0;  // Index for text

    while (i < pattern.size()) {
        if (pattern[i] == text[j]) {
            i++;
            j++;
        }

        if (j == m) {
            // Match found, add starting index to result
            result.push_back(i - j);

            // Move `i` to skip the overlapping part and avoid overlap
            j = 0;  // Reset `j` to start fresh
        } else if (i < pattern.size() && pattern[i] != text[j]) {
            if (j != 0) {
                j = findLps[j - 1];  // Use LPS array to skip comparisons
            } else {
                i++;
            }
        }
    }

    // Output the result
    for (int idx : result) {
        cout << idx << " ";
    }

    return 0;
}
