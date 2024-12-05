class Solution {
public:
    bool canChange(string start, string target) {
        // Remove all '_' and check if the sequence of 'L' and 'R' matches
        string s1, t1;
        for (char c : start) {
            if (c != '_') s1 += c;
        }
        for (char c : target) {
            if (c != '_') t1 += c;
        }
        if (s1 != t1) return false;

       // check position of L and R 
        int i = 0, j = 0;
        int n = start.size();
        while (i < n && j < n) {
            // Skip underscores in both strings
            while (i < n && start[i] == '_') i++;
            while (j < n && target[j] == '_') j++;

            // If one pointer reaches the end, break
            if (i == n || j == n) break;

          
            if (start[i] != target[j]) return false;

          
            if (start[i] == 'L' && i < j) return false; // 'L' can't move right
            if (start[i] == 'R' && i > j) return false; // 'R' can't move left

           
            i++;
            j++;
        }
        return true;
    }
};
