class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       
       if(k<=1) return 0;
       int subArrayCnt=0;
       int left=0;
       int right=0;

       int product=1;

       while(right<nums.size()){

           product=product*nums[right];


           while(product>=k){
            product=product/nums[left];
            left++;
           }

           subArrayCnt+=right-left+1;
           right++;
       }

       return subArrayCnt;
    }
};
