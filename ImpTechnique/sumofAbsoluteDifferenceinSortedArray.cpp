class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int totalSum = 0, prefixSum = 0;

      
        for (int num : nums) {
            totalSum += num;
        }

       
        for (int i = 0; i < n; ++i) {
            int leftSum = prefixSum;         
            int rightSum = totalSum - prefixSum - nums[i]; 

            
            result[i] = nums[i] * i - leftSum + rightSum - nums[i] * (n - i - 1);

            // Update prefixSum
            prefixSum += nums[i];
        }

        return result;
    }
};
