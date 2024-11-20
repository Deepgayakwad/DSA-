#include<unordered_set>
#include<algorithm>
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        long long int currWindowSum=0;

        long long int result=0;

        unordered_set<int>s;

        int left=0;
        int right=0;

        while(right<nums.size()){

               while(s.count(nums[right])){
                 currWindowSum-=nums[left];
                 s.erase(nums[left]);
                 left++;
               }

               currWindowSum+=nums[right];
               s.insert(nums[right]);

               if((right-left+1)==k){
                  result = max(result,currWindowSum);

                  currWindowSum-=nums[left];
                  s.erase(nums[left]);
                  left++;
               }

               right++;
        }

        return result;
    }
};
