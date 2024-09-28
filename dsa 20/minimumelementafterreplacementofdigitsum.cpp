class Solution {
public:
    int minElement(vector<int>& nums) {

        vector<int>ans;
        int n=nums.size();
        int carry=0;

        for(int i=0;i<n;i++){
            int num=nums[i];

            while(num>0){
                carry+=num%10;
                num=num/10;
                
            }

            ans.push_back(carry);
            carry=0;
        }

        sort(ans.begin(),ans.end());

        return ans[0];
        
    }
};
